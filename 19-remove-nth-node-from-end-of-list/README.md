# 19. Remove Nth Node From End of List

**LeetCode:** [Problem 19](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)

## Approach: Two Pointers

Use a dummy node before the head so deleting the first node needs no special case. Advance the fast pointer by `n` nodes, then move both pointers together until fast reaches the last node. The slow pointer is then immediately before the node to remove. Relink around that node and return `dummy.next`.

## Complexity

- **Time:** `O(L)`, where `L` is the list length; the list is traversed once.
- **Auxiliary space:** `O(1)`.
