#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        string prefix = strs[0];

        for (int i = 1; i < static_cast<int>(strs.size()); ++i) {
            size_t j = 0;
            while (j < prefix.size() &&
                   j < strs[i].size() &&
                   prefix[j] == strs[i][j]) {
                ++j;
            }

            prefix.resize(j);
            if (prefix.empty()) {
                return "";
            }
        }

        return prefix;
    }
};
