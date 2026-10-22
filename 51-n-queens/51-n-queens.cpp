class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> solutions;
        vector<string> board(n, string(n, '.'));

        vector<bool> columns(n, false);
        vector<bool> diag1(2 * n - 1, false); // row - col + n - 1
        vector<bool> diag2(2 * n - 1, false); // row + col

        backtrack(0, n, board, columns, diag1, diag2, solutions);
        return solutions;
    }

private:
    void backtrack(int row, int n, vector<string>& board,
                   vector<bool>& columns, vector<bool>& diag1,
                   vector<bool>& diag2, vector<vector<string>>& solutions) {
        if (row == n) {
            solutions.push_back(board);
            return;
        }

        for (int col = 0; col < n; ++col) {
            int d1 = row - col + n - 1;
            int d2 = row + col;

            if (columns[col] || diag1[d1] || diag2[d2]) {
                continue;
            }

            board[row][col] = 'Q';
            columns[col] = diag1[d1] = diag2[d2] = true;

            backtrack(row + 1, n, board, columns, diag1, diag2, solutions);

            board[row][col] = '.';
            columns[col] = diag1[d1] = diag2[d2] = false;
        }
    }
};