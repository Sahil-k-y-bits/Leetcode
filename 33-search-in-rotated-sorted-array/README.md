# 33. Search in Rotated Sorted Array

**LeetCode:** https://leetcode.com/problems/search-in-rotated-sorted-array/

## Approach: Modified Binary Search

At every iteration, at least one half of the rotated array is sorted.

1. Find the middle element and return its index if it equals the target.
2. If the left half is sorted, check whether the target lies in that half; otherwise search the right half.
3. If the right half is sorted, check whether the target lies in that half; otherwise search the left half.
4. Continue until the target is found or the search interval becomes empty.

The problem guarantees distinct values, so the sorted half can be identified with a single comparison.

## Complexity

- **Time:** `O(log n)` — the search interval is halved at each step.
- **Auxiliary space:** `O(1)` — iterative search uses constant extra space.

## C++

The solution uses the LeetCode-compatible `class Solution` signature.
