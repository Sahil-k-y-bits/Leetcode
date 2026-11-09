# 22. Generate Parentheses

**LeetCode:** [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)

## Approach: Backtracking

Build the string one character at a time while maintaining two counts:

- Add `(` while fewer than `n` opening brackets have been used.
- Add `)` only when it will not make the prefix invalid (`close < open`).
- When the string reaches length `2 * n`, add it to the answer.

These rules generate only valid combinations, so no final filtering is needed.

## Complexity

- **Time:** `O(C_n * n)`, where `C_n` is the nth Catalan number and there are `C_n` valid strings of length `2n`.
- **Auxiliary space:** `O(n)` for the recursion path, excluding the output.
