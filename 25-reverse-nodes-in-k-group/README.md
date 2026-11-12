# 25. Reverse Nodes in k-Group

**LeetCode:** [Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)  
**Language:** C++17  
**Technique:** Iterative linked-list reversal

## Approach

Use a dummy node and process the list one group at a time:

1. Starting from the node before the current group, locate the group's (k)-th node.
2. If fewer than (k) nodes remain, stop and leave that suffix unchanged.
3. Reverse the group's links in place, connecting the former head to the node after the group.
4. Reconnect the reversed group and continue from its new tail.

The implementation reuses the original nodes and does not allocate another list.

## Complexity

- **Time:** (O(n)) — each node is visited and relinked a constant number of times.
- **Auxiliary space:** (O(1)) — reversal uses only a fixed number of pointers.

## Example

- Input: `head = [1,2,3,4,5]`, `k = 2`
- Output: `[2,1,4,3,5]`

Only complete groups of size `k` are reversed; any remaining nodes stay in their original order.
