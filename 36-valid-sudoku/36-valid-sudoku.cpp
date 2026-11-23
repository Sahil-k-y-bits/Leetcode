class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {};
        bool col[9][9] = {};
        bool box[9][9] = {};

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                char ch = board[r][c];
                if (ch == '.') {
                    continue;
                }

                int digit = ch - '1';
                int boxIndex = (r / 3) * 3 + (c / 3);

                if (row[r][digit] || col[c][digit] || box[boxIndex][digit]) {
                    return false;
                }

                row[r][digit] = true;
                col[c][digit] = true;
                box[boxIndex][digit] = true;
            }
        }

        return true;
    }
};
