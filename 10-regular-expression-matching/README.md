# 10. Regular Expression Matching

**LeetCode:** https://leetcode.com/problems/regular-expression-matching/

## Approach
Use dynamic programming where `dp[i][j]` indicates whether the first `i` characters of the string match the first `j` characters of the pattern.

- A literal character or `.` uses the result for both prefixes shortened by one character.
- For `*`, either use zero occurrences of the preceding pattern element (`dp[i][j - 2]`) or, when it matches the current string character, consume one more character while keeping the pattern position (`dp[i - 1][j]`).
- Initialize empty-string matches, including patterns such as `a*b*`.

## Complexity
- **Time:** `O(m × n)`
- **Space:** `O(m × n)`

Here, `m` is the string length and `n` is the pattern length.
