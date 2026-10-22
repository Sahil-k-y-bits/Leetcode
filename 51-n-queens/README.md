# 51. N-Queens

**LeetCode:** https://leetcode.com/problems/n-queens/  
**Difficulty:** Hard  
**Language:** C++

## Approach: Backtracking

Place one queen in each row. For each row, try every column and skip positions whose column or diagonals are already occupied. When a queen is placed, mark its column and both diagonals, recurse to the next row, then undo those changes to backtrack.

- **Time complexity:** O(n!) upper-bound search, excluding the cost of copying completed boards.
- **Auxiliary space:** O(n) for the board-row recursion state and occupancy arrays, excluding the output.

The solution follows LeetCode's expected `class Solution` interface.
