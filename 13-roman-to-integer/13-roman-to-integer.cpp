#include <string>
using namespace std;

class Solution {
private:
    int romanValue(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

public:
    int romanToInt(string s) {
        int total = 0;
        int previousValue = 0;

        for (int i = static_cast<int>(s.size()) - 1; i >= 0; --i) {
            int currentValue = romanValue(s[i]);

            if (currentValue < previousValue) {
                total -= currentValue;
            } else {
                total += currentValue;
            }

            previousValue = currentValue;
        }

        return total;
    }
};
