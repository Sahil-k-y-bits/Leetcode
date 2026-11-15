# 28. Find the Index of the First Occurrence in a String

**LeetCode:** [28 - Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)

## Approach: Knuth-Morris-Pratt (KMP)

1. Build the LPS (longest proper prefix that is also a suffix) array for `needle`.
2. Scan `haystack` while comparing the current characters.
3. On a mismatch, use the LPS array to shift the pattern without rechecking characters already known to match.
4. Return the starting index when the entire needle matches; otherwise return `-1`.

The implementation handles an empty `needle` by returning `0`, as required.

## Complexity

- **Time:** `O(n + m)`, where `n` is the length of `haystack` and `m` is the length of `needle`.
- **Auxiliary space:** `O(m)` for the LPS array.
