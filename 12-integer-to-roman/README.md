# 12. Integer to Roman

**LeetCode:** https://leetcode.com/problems/integer-to-roman/

## Approach: Greedy

Process the Roman numeral values from largest to smallest, including the
subtractive pairs (900 = CM, 400 = CD, 90 = XC, 40 = XL, 9 = IX, 4 = IV).
Append a symbol while its value fits in the remaining number, subtract that
value, and continue until the number becomes zero.

## Complexity

- **Time:** O(1) for the LeetCode constraint 1 <= num <= 3999 (the symbol
  list has a fixed size and the output length is bounded).
- **Space:** O(1) auxiliary space, excluding the returned string.
