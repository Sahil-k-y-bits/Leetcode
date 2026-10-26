#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        int n = static_cast<int>(s.size());
        if (numRows == 1 || numRows >= n) {
            return s;
        }

        vector<string> rows(numRows);
        int currentRow = 0;
        bool goingDown = false;

        for (char ch : s) {
            rows[currentRow] += ch;

            if (currentRow == 0 || currentRow == numRows - 1) {
                goingDown = !goingDown;
            }
            currentRow += goingDown ? 1 : -1;
        }

        string result;
        for (const string& row : rows) {
            result += row;
        }
        return result;
    }
};
