#include <vector>
#include <utility>
using namespace std;

class Solution {
private:
    static constexpr int FULL_MASK = (1 << 9) - 1;
    int rowMask[9]{};
    int colMask[9]{};
    int boxMask[9]{};
    vector<pair<int, int>> emptyCells;

    int boxIndex(int row, int col) {
        return (row / 3) * 3 + (col / 3);
    }

    bool backtrack(vector<vector<char>>& board, int pos) {
        if (pos == static_cast<int>(emptyCells.size())) {
            return true;
        }

        int best = pos;
        int bestCount = 10;

        // Choose the remaining cell with the fewest legal candidates (MRV).
        for (int i = pos; i < static_cast<int>(emptyCells.size()); ++i) {
            const auto [r, c] = emptyCells[i];
            const int candidates =
                FULL_MASK & ~(rowMask[r] | colMask[c] | boxMask[boxIndex(r, c)]);
            const int count = __builtin_popcount(static_cast<unsigned int>(candidates));

            if (count < bestCount) {
                bestCount = count;
                best = i;
                if (count == 0) {
                    return false;
                }
            }
        }

        swap(emptyCells[pos], emptyCells[best]);
        const auto [r, c] = emptyCells[pos];
        const int b = boxIndex(r, c);
        int candidates = FULL_MASK & ~(rowMask[r] | colMask[c] | boxMask[b]);

        while (candidates != 0) {
            const int bit = candidates & -candidates;
            candidates ^= bit;
            const int digit = __builtin_ctz(static_cast<unsigned int>(bit));

            board[r][c] = static_cast<char>('1' + digit);
            rowMask[r] |= bit;
            colMask[c] |= bit;
            boxMask[b] |= bit;

            if (backtrack(board, pos + 1)) {
                return true;
            }

            rowMask[r] ^= bit;
            colMask[c] ^= bit;
            boxMask[b] ^= bit;
            board[r][c] = '.';
        }

        swap(emptyCells[pos], emptyCells[best]);
        return false;
    }

public:
    void solveSudoku(vector<vector<char>>& board) {
        emptyCells.clear();
        for (int i = 0; i < 9; ++i) {
            rowMask[i] = 0;
            colMask[i] = 0;
            boxMask[i] = 0;
        }

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] == '.') {
                    emptyCells.emplace_back(r, c);
                } else {
                    const int bit = 1 << (board[r][c] - '1');
                    rowMask[r] |= bit;
                    colMask[c] |= bit;
                    boxMask[boxIndex(r, c)] |= bit;
                }
            }
        }

        backtrack(board, 0);
    }
};
