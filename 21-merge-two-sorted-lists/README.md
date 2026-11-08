# 21. Merge Two Sorted Lists

**LeetCode:** [Problem 21](https://leetcode.com/problems/merge-two-sorted-lists/)  
**Language:** C++

## Approach: Iterative Merge with a Dummy Node

Use a dummy head to build the merged list without special-casing the first node. Compare the current nodes of both sorted lists, link the smaller node to the result, and advance that list's pointer. Once one list is exhausted, append the remainder of the other list.

The solution reuses the existing nodes and does not allocate new list nodes.

## Complexity

- **Time:** (O(m+n)), where (m) and (n) are the lengths of the two lists. Each node is visited once.
- **Auxiliary space:** (O(1)), because only a fixed number of pointers are used.
