# 9. Palindrome Number

**LeetCode:** https://leetcode.com/problems/palindrome-number/

## Approach
- Negative numbers are not palindromes.
- A non-zero number ending in zero cannot be a palindrome.
- Reverse only half of the digits to avoid reversing the entire integer.
- For even digit counts, compare both halves; for odd counts, discard the middle digit from the reversed half.

## Complexity
- **Time:** O(log10(n))
- **Space:** O(1)
