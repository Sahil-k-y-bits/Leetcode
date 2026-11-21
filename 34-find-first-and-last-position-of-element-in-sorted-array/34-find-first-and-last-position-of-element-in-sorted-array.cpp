#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto first = lower_bound(nums.begin(), nums.end(), target);
        if (first == nums.end() || *first != target) {
            return {-1, -1};
        }

        auto afterLast = upper_bound(first, nums.end(), target);
        return {
            static_cast<int>(first - nums.begin()),
            static_cast<int>(afterLast - nums.begin() - 1)
        };
    }
};
