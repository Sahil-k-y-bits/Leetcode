# 17. Letter Combinations of a Phone Number

**LeetCode:** [17. Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)

## Approach: Backtracking

Use a digit-to-letters mapping for digits 2 through 9. At each position, try every letter mapped to the current digit, append it to the working string, and recursively process the next digit. Once all digits have been processed, add the completed combination to the result. Backtrack by removing the last character before trying the next choice.

An empty input returns an empty result.

## Complexity

Let *n* be the number of input digits.

- **Time:** O(n × 4^n), since at most 4 choices are explored per digit and each completed string takes O(n) to copy.
- **Auxiliary space:** O(n) for the recursion stack and working string, excluding the output.
