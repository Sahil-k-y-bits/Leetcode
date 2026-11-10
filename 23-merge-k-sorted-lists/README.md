# 23. Merge k Sorted Lists

**LeetCode:** [Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)

## Approach: Min-Heap

- Insert the head of every non-empty linked list into a min-heap.
- Repeatedly remove the smallest node and append it to the merged list.
- Insert that node's next node into the heap, if it exists.
- Reuse the original nodes; no replacement list nodes are created (apart from a temporary dummy head).

## Complexity

Let **N** be the total number of nodes and **k** the number of lists.

- **Time:** O(N log k), because each node is inserted into and removed from a heap containing at most k nodes.
- **Auxiliary space:** O(k) for the heap.
