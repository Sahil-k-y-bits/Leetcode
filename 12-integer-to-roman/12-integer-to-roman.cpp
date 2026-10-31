#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        const vector<int> values = {
            1000, 900, 500, 400, 100, 90, 50,
            40, 10, 9, 5, 4, 1
        };
        const vector<string> symbols = {
            "M", "CM", "D", "CD", "C", "XC", "L",
            "XL", "X", "IX", "V", "IV", "I"
        };

        string result;
        for (int i = 0; i < static_cast<int>(values.size()); ++i) {
            while (num >= values[i]) {
                result += symbols[i];
                num -= values[i];
            }
        }
        return result;
    }
};
