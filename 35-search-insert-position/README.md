# 35. Search Insert Position

**LeetCode:** https://leetcode.com/problems/search-insert-position/

## Approach: Lower-Bound Binary Search

The array is sorted, so binary search finds the first index whose value is greater than or equal to the target.

- If `nums[mid] < target`, the insertion position must be to the right of `mid`.
- Otherwise, keep `mid) as a candidate and continue in the left half.
- When the search interval becomes empty, `left` is either the target's index or its correct insertion position.

The implementation uses a half-open search interval `[left, right)), where `right` starts at `nums.size()`.

## Complexity

- **Time:** O(log n)
- **Auxiliary space:** O(1)

## C++

See [35-search-insert-position.cpp](./35-search-insert-position.cpp).
