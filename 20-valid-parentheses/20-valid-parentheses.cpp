#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                brackets.push(ch);
                continue;
            }

            if (brackets.empty()) {
                return false;
            }

            char open = brackets.top();
            brackets.pop();

            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '[')) {
                return false;
            }
        }

        return brackets.empty();
    }
};
