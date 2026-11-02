# 14. Longest Common Prefix

## Approach: Horizontal Scanning

Start with the first string as the candidate prefix. Compare it with each
subsequent string, character by character, and shrink the candidate to the
matching portion. If it becomes empty, no common prefix exists.

The solution handles an empty input list and strings with no shared prefix.

## Complexity

- **Time:** O(S), where S is the total number of characters across all strings.
- **Auxiliary space:** O(1), excluding the returned prefix.
