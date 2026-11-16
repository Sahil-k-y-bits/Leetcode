#include <climits>

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0) {
            return INT_MAX;
        }

        long long a = dividend;
        long long b = divisor;
        const bool negative = (a < 0) != (b < 0);

        if (a < 0) a = -a;
        if (b < 0) b = -b;

        long long quotient = 0;

        // Build the quotient from the highest usable power of two.
        for (int shift = 31; shift >= 0; --shift) {
            if ((a >> shift) >= b) {
                a -= (b << shift);
                quotient |= (1LL << shift);
            }
        }

        long long result = negative ? -quotient : quotient;

        if (result > INT_MAX) return INT_MAX;
        if (result < INT_MIN) return INT_MIN;
        return static_cast<int>(result);
    }
};
