# 2. Add Two Numbers

**Difficulty:** Medium  
**Topic:** Linked List, Math

## Approach

Traverse both linked lists digit by digit. Add the current digits and the carry from the previous position. Create a node containing `sum % 10`, then update the carry to `sum / 10`. Continue while either list has nodes left or a carry remains.

A dummy head simplifies building the result list.

## Complexity

- **Time:** `O(max(m, n))`, where `m` and `n` are the lengths of the lists.
- **Auxiliary space:** `O(1)` excluding the output list; the output uses `O(max(m, n))` nodes (possibly one extra node for a final carry).
