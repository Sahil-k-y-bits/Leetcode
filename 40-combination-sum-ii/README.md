# 40. Combination Sum II

**LeetCode:** https://leetcode.com/problems/combination-sum-ii/

## Approach: Sorting + Backtracking

- Sort the candidates so duplicate values are adjacent and the search can stop once a value exceeds the remaining target.
- Build combinations with DFS/backtracking.
- Recurse with `i + 1`, because each candidate position may be used only once.
- Skip a value when it equals the previous value at the same recursion depth. This avoids duplicate combinations while still allowing equal values from different positions.
- When the remaining target reaches zero, add the current combination to the answer.

## Complexity

Let `n` be the number of candidates and `R` the number of combinations returned.

- **Time:** `O(2^n · n)` upper bound, including copying each completed combination into the output.
- **Auxiliary space:** `O(n)` for the recursion stack and current combination, excluding the output.

## Example

```text
Input:  candidates = [10,1,2,7,6,1,5], target = 8
Output: [[1,1,6],[1,2,5],[1,7],[2,6]]
```

## Language

C++17 (LeetCode `class Solution` format).
