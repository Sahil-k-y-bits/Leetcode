class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        const int n = static_cast<int>(nums.size());

        // Place each value x in the position x - 1 whenever possible.
        for (int i = 0; i < n; ++i) {
            while (nums[i] >= 1 &&
                   nums[i] <= n &&
                   nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        // The first index that does not contain index + 1 is the answer.
        for (int i = 0; i < n; ++i) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        return n + 1;
    }
};