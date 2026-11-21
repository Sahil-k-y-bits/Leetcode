# 34. Find First and Last Position of Element in Sorted Array

**LeetCode:** https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

## Approach: Two Binary Searches

- Use `lower_bound` to locate the first position whose value is not less than the target.
- If that position is at the end or does not contain the target, return `[-1, -1]`.
- Otherwise, use `upper_bound` starting from the first match to locate the first value greater than the target.
- The last occurrence is one position before that iterator.

## Complexity

- **Time:** `O(log n)` — two binary searches over the sorted array.
- **Extra space:** `O(1)` — only iterators and scalar values are used.

The implementation follows LeetCode's C++ `Solution::searchRange` interface.
