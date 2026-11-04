class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        const vector<string> letters = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> result;
        string current;

        function<void(int)> backtrack = [&](int index) {
            if (index == static_cast<int>(digits.size())) {
                result.push_back(current);
                return;
            }

            const string& choices = letters[digits[index] - '0'];
            for (char ch : choices) {
                current.push_back(ch);
                backtrack(index + 1);
                current.pop_back();
            }
        };

        backtrack(0);
        return result;
    }
};
