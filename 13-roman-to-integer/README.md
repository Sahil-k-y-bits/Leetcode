# 13. Roman to Integer

## Approach: Right-to-left scan

Scan the Roman numeral from right to left while keeping the value of the previously
processed symbol. If the current symbol is smaller than the previous symbol, subtract
it; otherwise, add it. This handles subtractive pairs such as `IV`, `IX`, `XL`,
`XC`, `CD`, and `CM` without special-casing each pair.

The implementation uses a `switch` to map each Roman symbol to its integer value and
follows LeetCode's required `class Solution` interface.

## Complexity

- **Time:** `O(n)`, where `n` is the length of the input string; each symbol is visited once.
- **Auxiliary space:** `O(1)`, since only a fixed number of variables are used.
