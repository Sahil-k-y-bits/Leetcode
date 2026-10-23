#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int left = 0;
        int best = 0;

        for (int right = 0; right < static_cast<int>(s.size()); ++right) {
            char ch = s[right];
            auto it = lastSeen.find(ch);
            if (it != lastSeen.end()) {
                left = max(left, it->second + 1);
            }

            lastSeen[ch] = right;
            best = max(best, right - left + 1);
        }

        return best;
    }
};
