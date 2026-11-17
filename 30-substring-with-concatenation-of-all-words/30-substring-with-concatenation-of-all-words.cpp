#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> answer;
        if (s.empty() || words.empty()) return answer;

        const int wordLength = static_cast<int>(words[0].size());
        const int wordCount = static_cast<int>(words.size());
        if (wordLength == 0 || s.size() < static_cast<size_t>(wordLength) * wordCount) {
            return answer;
        }

        unordered_map<string, int> required;
        for (const string& word : words) ++required[word];

        const int n = static_cast<int>(s.size());
        for (int offset = 0; offset < wordLength; ++offset) {
            int left = offset;
            int right = offset;
            int wordsInWindow = 0;
            unordered_map<string, int> window;

            while (right + wordLength <= n) {
                string current = s.substr(right, wordLength);
                right += wordLength;

                const auto requiredIt = required.find(current);
                if (requiredIt == required.end()) {
                    window.clear();
                    wordsInWindow = 0;
                    left = right;
                    continue;
                }

                ++window[current];
                ++wordsInWindow;

                while (window[current] > requiredIt->second) {
                    string first = s.substr(left, wordLength);
                    --window[first];
                    --wordsInWindow;
                    left += wordLength;
                }

                if (wordsInWindow == wordCount) {
                    answer.push_back(left);
                    string first = s.substr(left, wordLength);
                    --window[first];
                    --wordsInWindow;
                    left += wordLength;
                }
            }
        }

        sort(answer.begin(), answer.end());
        return answer;
    }
};
