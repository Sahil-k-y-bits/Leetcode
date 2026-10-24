# 4. Median of Two Sorted Arrays

## Approach
Binary-search a partition in the shorter sorted array. Choose the matching partition in the other array so the left side contains half the elements. When both left-side maximums are no greater than the opposite right-side minimums, the partition is valid. Return the left maximum for an odd total, or the average of the left maximum and right minimum for an even total.

## Complexity
- **Time:** \(O(\log(\min(m,n)))\)
- **Auxiliary space:** \(O(1)\)

Here, \(m\) and \(n\) are the lengths of the two arrays.
