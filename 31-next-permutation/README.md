# 31. Next Permutation

**LeetCode:** [31 - Next Permutation](https://leetcode.com/problems/next-permutation/)

## Approach: Find the next lexicographical arrangement

1. Scan from right to left to find the first index whose value is smaller than the value immediately after it. This is the pivot.
2. If a pivot exists, scan from the right to find the first value greater than the pivot and swap them.
3. Reverse the suffix after the pivot. The suffix was non-increasing, so reversing it makes it the smallest possible suffix.
4. If no pivot exists, the whole array is non-increasing; reversing the whole array produces the first permutation.

The array is modified in place.

## Complexity

- **Time:** O(n) — the pivot search, successor search, and suffix reversal each take linear time.
- **Auxiliary space:** O(1) — all operations are in place.
