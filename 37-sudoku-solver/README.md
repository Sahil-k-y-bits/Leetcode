# 37. Sudoku Solver

## Approach: Backtracking + Bitmasks + MRV

- Build bitmasks for digits already used in each row, column, and 3×3 box.
- Collect all empty cells.
- At each recursion, choose the empty cell with the fewest legal candidates (Minimum Remaining Values).
- Try each available digit, update the three masks, and recurse.
- If a choice leads to a contradiction, undo the masks and restore the cell.
- A completed board ends the search.

The 9-bit mask makes candidate checks and updates constant-time. The box index is:

`(row / 3) * 3 + (col / 3)`

## Complexity

Let `E` be the number of initially empty cells.

- **Time:** `O(E · 9^E)` worst-case upper bound, including the MRV scan at each search node.
- **Auxiliary space:** `O(E)` for the empty-cell list and recursion stack; the row, column, and box masks use constant space.

The solution uses the LeetCode-compatible `Solution::solveSudoku` interface and C++17.
