# 36. Valid Sudoku

**LeetCode:** https://leetcode.com/problems/valid-sudoku/

## Approach: Row, Column, and Box Tracking

- Maintain three sets of seen digits for each row, column, and 3×3 box.
- Skip empty cells (.).
- For each digit, calculate its 3×3 box index with (row / 3) * 3 + (col / 3).
- If the digit has already appeared in its row, column, or box, return false.
- Otherwise, mark it as seen in all three structures. If every cell passes, return true.

## Complexity

- **Time:** O(1) — the board always contains exactly 81 cells.
- **Auxiliary space:** O(1) — three fixed 9×9 boolean tables.
