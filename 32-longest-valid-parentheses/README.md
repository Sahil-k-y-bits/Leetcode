# 32. Longest Valid Parentheses

**LeetCode:** https://leetcode.com/problems/longest-valid-parentheses/

## Approach: Dynamic Programming

Let `dp[i]` be the length of the longest valid parentheses substring that ends at index `i`.

- If `s[i]` is `'('`, no valid substring can end there, so `dp[i] = 0`.
- If `s[i]` is `')'` and `s[i - 1]` is `'('`, append the pair to the valid substring ending two positions earlier.
- If both current and previous characters are `')'`, look just before the valid block ending at `i - 1`. If that character is `'('`, include the matching pair and any valid block immediately before it.

Track the maximum value in `dp` and return it.

## Complexity

- **Time:** `O(n)` — each character is processed once.
- **Auxiliary space:** `O(n)` — the DP array stores one value per character.
