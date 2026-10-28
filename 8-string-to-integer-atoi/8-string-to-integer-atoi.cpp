#include <cctype>
#include <climits>
#include <string>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        const int n = static_cast<int>(s.size());

        while (i < n && isspace(static_cast<unsigned char>(s[i]))) {
            ++i;
        }

        bool negative = false;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            negative = (s[i] == '-');
            ++i;
        }

        const long long limit = negative
            ? 2147483648LL
            : 2147483647LL;
        long long value = 0;
        bool foundDigit = false;

        while (i < n && s[i] >= '0' && s[i] <= '9') {
            foundDigit = true;
            const int digit = s[i] - '0';

            if (value > (limit - digit) / 10) {
                return negative ? INT_MIN : INT_MAX;
            }

            value = value * 10 + digit;
            ++i;
        }

        if (!foundDigit) {
            return 0;
        }

        if (negative) {
            if (value == 2147483648LL) {
                return INT_MIN;
            }
            return -static_cast<int>(value);
        }

        return static_cast<int>(value);
    }
};
