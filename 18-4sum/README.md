# 18. 4Sum

**LeetCode:** https://leetcode.com/problems/4sum/

## Approach: Sorting + Two Pointers

Sort the array, fix the first two elements with nested loops, then use
two pointers to find the remaining pair. Skip repeated values at each
level so every quadruplet is unique. Use `long long` for the sum to
avoid integer overflow.

## Complexity

- **Time:** (O(n^3)) — two fixed indices and a linear two-pointer scan.
- **Auxiliary space:** (O(log n)) for the sorting implementation's stack
  (excluding the output).
