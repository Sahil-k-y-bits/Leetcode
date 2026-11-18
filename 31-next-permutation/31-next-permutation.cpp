#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() < 2) {
            return;
        }

        // Find the first index from the right where the sequence increases.
        int pivot = static_cast<int>(nums.size()) - 2;
        while (pivot >= 0 && nums[pivot] >= nums[pivot + 1]) {
            --pivot;
        }

        // If a pivot exists, swap it with the smallest larger value to its right.
        if (pivot >= 0) {
            int successor = static_cast<int>(nums.size()) - 1;
            while (nums[successor] <= nums[pivot]) {
                --successor;
            }
            swap(nums[pivot], nums[successor]);
        }

        // Reverse the suffix to make it the smallest possible arrangement.
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};
