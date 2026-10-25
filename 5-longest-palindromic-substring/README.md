# 5. Longest Palindromic Substring

## Approach: Expand Around Center

Every palindrome has either one center character (odd length) or a center between two characters (even length). For each index, expand outward for both center types while the characters match. Track the longest interval found and return that substring.

## Complexity

- **Time:** O(n^2) in the worst case, since each of the 2n - 1 centers can expand across the string.
- **Auxiliary space:** O(1), excluding the returned substring.

The C++ solution uses the LeetCode-compatible class Solution signature and does not include main().
