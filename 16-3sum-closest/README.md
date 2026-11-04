# 16. 3Sum Closest

**LeetCode:** https://leetcode.com/problems/3sum-closest/

## Approach: Sorting + Two Pointers

1. Sort the input array.
2. Fix each index `i` in turn and search the remaining suffix with `left` and `right` pointers.
3. Update the best sum whenever the current three-number sum is closer to the target.
4. Move `left` forward when the sum is too small, or `right` backward when it is too large. Return immediately if the target is reached exactly.

The implementation uses `long long` for intermediate sums and differences to avoid overflow.

## Complexity

- **Time:** `O(n²)` — sorting takes `O(n log n)`, followed by an `O(n²)` two-pointer search.
- **Auxiliary space:** `O(log n)` for the sorting implementation's recursion stack; the scan itself uses `O(1)` extra space.
