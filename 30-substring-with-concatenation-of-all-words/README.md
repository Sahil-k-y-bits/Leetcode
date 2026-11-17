# 30. Substring with Concatenation of All Words

**LeetCode:** https://leetcode.com/problems/substring-with-concatenation-of-all-words/

## Approach: Sliding Window

- Count the required frequency of each word.
- Run a sliding window for every offset from `0` to `wordLength - 1` so each window stays aligned to word boundaries.
- Expand the window one word at a time. If a word is not required, clear the window and restart after it.
- If a word occurs too many times, move the left edge forward until its frequency is valid.
- Record the left edge whenever the window contains exactly all words, then shrink by one word to continue finding overlapping matches.
- Sort the collected indices because offsets are processed separately.

## Complexity

Let `n` be the input string length, `L` the common word length, and `U` the number of distinct words.

- **Time:** Expected `O(n * L)` with substring creation and hashing; each word-aligned token is added to and removed from its window at most once.
- **Auxiliary space:** `O(U * L)` for the frequency maps, excluding the output.

## Language

C++17
