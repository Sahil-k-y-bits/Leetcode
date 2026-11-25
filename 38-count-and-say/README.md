# 38. Count and Say

**LeetCode:** https://leetcode.com/problems/count-and-say/

## Approach: Iterative Run-Length Encoding

Start with the first term, `"1"`. For each following term, scan the previous string in groups of equal consecutive digits. Append the group's length followed by the digit itself. Repeat until the requested term is built.

## Complexity

Let `L_i` denote the length of term `i`.

- **Time:** `O(L_1 + L_2 + ... + L_(n-1))`, because each term is scanned once to construct the next.
- **Auxiliary space:** `O(L_n)` for the newly generated term (excluding the returned string).

## Example

The sequence begins:

- 1: `1`
- 2: `11` (one 1)
- 3: `21` (two 1s)
- 4: `1211` (one 2, then one 1)
- 5: `111221` (one 1, one 2, then two 1s)
