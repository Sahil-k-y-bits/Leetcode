# 20. Valid Parentheses

**LeetCode:** https://leetcode.com/problems/valid-parentheses/

## Approach: Stack

- Push each opening bracket onto a stack.
- For each closing bracket, check that the stack is not empty and that its top contains the matching opening bracket.
- Return `false` immediately for a mismatch or an unmatched closing bracket.
- At the end, the string is valid only if the stack is empty.

## Complexity

- **Time:** O(n), where n is the length of the string. Each character is processed once.
- **Auxiliary space:** O(n) in the worst case, when all characters are opening brackets.
