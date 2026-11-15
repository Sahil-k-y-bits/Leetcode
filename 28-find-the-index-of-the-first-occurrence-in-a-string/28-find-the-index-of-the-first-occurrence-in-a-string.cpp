#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0;
        }

        const int n = static_cast<int>(haystack.size());
        const int m = static_cast<int>(needle.size());

        // Build the longest-prefix-suffix (LPS) table.
        vector<int> lps(m, 0);
        for (int i = 1, length = 0; i < m;) {
            if (needle[i] == needle[length]) {
                lps[i++] = ++length;
            } else if (length > 0) {
                length = lps[length - 1];
            } else {
                lps[i++] = 0;
            }
        }

        // KMP search: reuse matched prefixes instead of restarting.
        int i = 0;
        int j = 0;
        while (i < n) {
            if (haystack[i] == needle[j]) {
                ++i;
                ++j;

                if (j == m) {
                    return i - j;
                }
            } else if (j > 0) {
                j = lps[j - 1];
            } else {
                ++i;
            }
        }

        return -1;
    }
};
