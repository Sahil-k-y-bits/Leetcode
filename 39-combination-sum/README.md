# 39. Combination Sum

**LeetCode:** [Combination Sum](https://leetcode.com/problems/combination-sum/)  
**Language:** C++17  
**Technique:** Backtracking (DFS) with sorting and pruning

## Approach

1. Sort the candidates so the search can stop as soon as a value exceeds the remaining target.
2. Build a combination recursively, keeping a `start` index so candidates are considered in nondecreasing order.
3. After choosing candidate `candidates[i]`, recurse with `i` (not `i + 1`) so the same number can be reused.
4. When the remaining target becomes zero, add the current combination to the answer.
5. Backtrack by removing the last chosen value. Skip equal values at the same recursion depth to avoid duplicate combinations if duplicate inputs are supplied.

## Complexity

Let `n` be the number of candidates and `M = floor(target / min(candidates))`, the maximum possible combination length.

- **Time:** `O(n * C(n + M, M) + R * M)` as a conservative search-and-output upper bound, where `R` is the number of returned combinations.
- **Auxiliary space:** `O(M)` for the recursion stack and current combination, excluding the output.

## Example

Input: `candidates = [2,3,6,7], target = 7`  
Output: `[[2,2,3],[7]]`

Each candidate may be used unlimited times, and combinations are returned without regard to order.
