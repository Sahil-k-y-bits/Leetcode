class Solution {
public:
    int longestValidParentheses(string s) {
        const int n = static_cast<int>(s.size());
        vector<int> dp(n, 0);
        int best = 0;

        for (int i = 1; i < n; ++i) {
            if (s[i] == ')') {
                if (s[i - 1] == '(') {
                    dp[i] = 2 + (i >= 2 ? dp[i - 2] : 0);
                } else {
                    const int openIndex = i - dp[i - 1] - 1;
                    if (openIndex >= 0 && s[openIndex] == '(') {
                        dp[i] = dp[i - 1] + 2
                              + (openIndex >= 1 ? dp[openIndex - 1] : 0);
                    }
                }
                best = max(best, dp[i]);
            }
        }

        return best;
    }
};