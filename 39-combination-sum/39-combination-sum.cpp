#include <algorithm>
#include <vector>

class Solution {
private:
    void backtrack(int start,
                   int remaining,
                   const std::vector<int>& candidates,
                   std::vector<int>& current,
                   std::vector<std::vector<int>>& result) {
        if (remaining == 0) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < static_cast<int>(candidates.size()); ++i) {
            if (candidates[i] > remaining) {
                break;
            }
            if (i > start && candidates[i] == candidates[i - 1]) {
                continue;
            }

            current.push_back(candidates[i]);
            backtrack(i, remaining - candidates[i], candidates, current, result);
            current.pop_back();
        }
    }

public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates,
                                                  int target) {
        std::sort(candidates.begin(), candidates.end());
        std::vector<std::vector<int>> result;
        std::vector<int> current;
        backtrack(0, target, candidates, current, result);
        return result;
    }
};
