# 7. Reverse Integer

**Problem:** [LeetCode 7 — Reverse Integer](https://leetcode.com/problems/reverse-integer/)

## Approach
Extract the last digit with `x % 10`, remove it with `x /= 10`, and append it to the reversed number. Before appending, check against `INT_MAX` and `INT_MIN` boundaries so multiplication by 10 cannot overflow. Return `0` if the reversed value would exceed the signed 32-bit integer range.

## Complexity
- **Time:** `O(log |x|)` — one iteration per decimal digit.
- **Auxiliary space:** `O(1)`.
