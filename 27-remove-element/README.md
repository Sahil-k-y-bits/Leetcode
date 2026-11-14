# 27. Remove Element

**LeetCode:** https://leetcode.com/problems/remove-element/

## Approach: Two Pointers

Use a `read` pointer to scan the array and a `write` pointer to track the next position for a value that is not equal to `val`.

Whenever `nums[read] != val`, copy that value to `nums[write]` and advance `write`. The final `write` value is the number of elements to keep. The first `write` positions contain the required result; the remaining suffix does not matter.

## Complexity

- **Time:** O(n), where n is the array length. Each element is visited once.
- **Auxiliary space:** O(1), because the array is modified in place.
