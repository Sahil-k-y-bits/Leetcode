class Solution {
private:
    void backtrack(vector<int>& candidates, int remaining, int start,
                   vector<int>& current, vector<vector<int>>& answer) {
        if (remaining == 0) {
            answer.push_back(current);
            return;
        }

        for (int i = start; i < static_cast<int>(candidates.size()); ++i) {
            // Skip equal values at the same recursion depth.
            if (i > start && candidates[i] == candidates[i - 1]) {
                continue;
            }

            // Candidates are sorted, so later values cannot fit either.
            if (candidates[i] > remaining) {
                break;
            }

            current.push_back(candidates[i]);
            // i + 1 ensures each array element is used at most once.
            backtrack(candidates, remaining - candidates[i], i + 1,
                      current, answer);
            current.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> answer;
        vector<int> current;
        backtrack(candidates, target, 0, current, answer);
        return answer;
    }
};
