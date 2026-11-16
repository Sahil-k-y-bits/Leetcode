# 29. Divide Two Integers

**Difficulty:** Medium  
**Topic:** Math, Bit Manipulation

## Approach: Bit Shifting

The solution performs binary long division without using multiplication, division, or modulo.

1. Convert both operands to positive long long values so that INT_MIN can be handled safely.
2. Remember whether the final result should be negative.
3. Starting at bit 31 and moving down to bit 0, check whether the remaining dividend contains the divisor shifted by that amount.
4. When it does, subtract that shifted divisor and set the corresponding quotient bit.
5. Restore the sign and clamp the result to the 32-bit signed integer range. This handles the overflow case INT_MIN / -1.

## Complexity

- **Time:** O(log |dividend|) bit positions (at most 32 iterations for 32-bit integers).
- **Auxiliary space:** O(1).

## Edge Cases

- INT_MIN / 1 returns INT_MIN.
- INT_MIN / -1 is clamped to INT_MAX.
- A quotient that is not exact is truncated toward zero, as required.
