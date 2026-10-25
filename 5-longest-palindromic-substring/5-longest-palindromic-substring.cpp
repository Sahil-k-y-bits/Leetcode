#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int maxLength = 0;

        for (int center = 0; center < static_cast<int>(s.size()); ++center) {
            // Odd-length palindromes (one character at the center).
            int left = center;
            int right = center;
            while (left >= 0 && right < static_cast<int>(s.size()) &&
                   s[left] == s[right]) {
                --left;
                ++right;
            }
            int length = right - left - 1;
            if (length > maxLength) {
                start = left + 1;
                maxLength = length;
            }

            // Even-length palindromes (center between two characters).
            left = center;
            right = center + 1;
            while (left >= 0 && right < static_cast<int>(s.size()) &&
                   s[left] == s[right]) {
                --left;
                ++right;
            }
            length = right - left - 1;
            if (length > maxLength) {
                start = left + 1;
                maxLength = length;
            }
        }

        return s.substr(start, maxLength);
    }
};
