#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        long long bestSum = 0;
        long long bestDiff = LLONG_MAX;

        for (int i = 0; i < static_cast<int>(nums.size()) - 2; ++i) {
            int left = i + 1;
            int right = static_cast<int>(nums.size()) - 1;

            while (left < right) {
                long long currentSum =
                    static_cast<long long>(nums[i]) + nums[left] + nums[right];
                long long diff = llabs(currentSum - static_cast<long long>(target));

                if (diff < bestDiff) {
                    bestDiff = diff;
                    bestSum = currentSum;
                }

                if (currentSum == target) {
                    return target;
                } else if (currentSum < target) {
                    ++left;
                } else {
                    --right;
                }
            }
        }

        return static_cast<int>(bestSum);
    }
};
