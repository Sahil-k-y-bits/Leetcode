# 24. Swap Nodes in Pairs

**LeetCode:** [Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/)

## Approach: Iterative Pointer Rewiring

- Use a dummy node before the head so the first pair is handled like every other pair.
- For each adjacent pair, keep pointers to the first and second nodes.
- Rewire the links so the second node comes first, then connect the pair to the remainder of the list.
- Advance the previous pointer to the first node, which is now the tail of the swapped pair.
- If one node remains without a pair, it stays in place.

The original nodes are reused; no additional list is created.

## Complexity

Let **n** be the number of nodes.

- **Time:** O(n), because each pair is processed once.
- **Auxiliary space:** O(1), because only a fixed number of pointers are used.
