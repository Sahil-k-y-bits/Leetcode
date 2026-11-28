# 41. First Missing Positive

**LeetCode:** https://leetcode.com/problems/first-missing-positive/

## Approach: Cyclic Placement

For an array of length `n`, the answer must be in the range `[1, n + 1]`.

- For every value `x` in `[1, n]`, place it at index `x - 1`.
- Keep swapping while the current value is in range and its destination does not already contain that value. The duplicate check prevents an infinite loop.
- Scan the array. The first index `i` where `nums[i] != i + 1` gives the answer `i + 1`.
- If every position is correct, return `n + 1`.

## Complexity

- **Time:** `O(n)` — each successful swap places a value in its final position; the placement and verification passes are linear.
- **Auxiliary space:** `O(1)` — the array is rearranged in place.

## C++ 

The solution is provided in [41-first-missing-positive.cpp](./41-first-missing-positive.cpp) using LeetCode's `Solution::firstMissingPositive` signature.
