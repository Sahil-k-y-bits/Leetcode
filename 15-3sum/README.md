# 15. 3Sum

## Approach: Sorting + Two Pointers

1. Sort the input array.
2. Fix each index `i) as the first element of a triplet.
3. Use two pointers (`left` and `right`) to find pairs whose sum is `-nums[i]`.
4. Move the left pointer when the sum is too small and the right pointer when it is too large.
5. Skip duplicate values for the fixed index and both pointers so each triplet appears only once.
6. Stop early when the fixed value is positive, because the remaining values are also positive.

The sum is evaluated as `long long` to avoid integer overflow during addition.

## Complexity

- **Time:** `O(n^2)` after sorting; sorting takes `O(n log n)`.
- **Auxiliary space:** `O(log n)` for the sorting stack (implementation-dependent), excluding the output.

## LeetCode

[Problem 15 — 3Sum](https://leetcode.com/problems/3sum/)
