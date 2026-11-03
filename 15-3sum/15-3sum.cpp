class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        const int n = static_cast<int>(nums.size());

        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            if (nums[i] > 0) {
                break;
            }

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                const long long sum =
                    static_cast<long long>(nums[i]) + nums[left] + nums[right];

                if (sum < 0) {
                    ++left;
                } else if (sum > 0) {
                    --right;
                } else {
                    result.push_back({nums[i], nums[left], nums[right]});

                    const int leftValue = nums[left];
                    const int rightValue = nums[right];

                    while (left < right && nums[left] == leftValue) {
                        ++left;
                    }
                    while (left < right && nums[right] == rightValue) {
                        --right;
                    }
                }
            }
        }

        return result;
    }
};
