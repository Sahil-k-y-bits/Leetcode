# 6. Zigzag Conversion

## Approach
Simulate writing the characters row by row. Move downward until reaching the last row, then move upward until reaching the first row, reversing direction at each boundary. Concatenate the rows to produce the converted string. If there is only one row or the row count is at least the string length, return the input unchanged.

## Complexity
- **Time:** O(n), where n is the length of the string; each character is visited and appended once.
- **Space:** O(n) for the row buffers and result.
