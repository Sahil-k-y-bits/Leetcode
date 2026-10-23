# 3. Longest Substring Without Repeating Characters

**Approach:** Use a sliding window `[left, right]` and store each character's most recent index. When a repeated character appears inside the current window, move `left` to one position after its previous index. Update the maximum window length at each step.

- **Time complexity:** `O(n)` average, where `n` is the string length.
- **Space complexity:** `O(min(n, charset))` for the last-seen index map.

The C++ solution uses LeetCode's required `Solution::lengthOfLongestSubstring` signature and has no `main()`.
