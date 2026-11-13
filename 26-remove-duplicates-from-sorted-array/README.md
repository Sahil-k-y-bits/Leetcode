# 26. Remove Duplicates from Sorted Array

**LeetCode:** https://leetcode.com/problems/remove-duplicates-from-sorted-array/

## Approach: Two Pointers

Because the input array is sorted, duplicate values are adjacent. Keep a write pointer at the next position for a distinct value, and scan the array with a read pointer. Whenever the current value differs from the last written value, copy it to the write position and advance the write pointer.

The first `k` elements contain the unique values when the function returns `k`. Values after that prefix do not matter.

## Complexity

- **Time:** O(n) — each element is examined once.
- **Auxiliary space:** O(1) — the array is updated in place.

## C++ Interface

The solution uses the LeetCode-compatible `class Solution` interface and does not include a standalone `main()`.
