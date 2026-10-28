# 8. String to Integer (atoi)

## Approach
1. Skip leading whitespace.
2. Read an optional `+` or `-` sign.
3. Consume consecutive digits and build the value.
4. Before each digit is appended, check whether the value would exceed the signed 32-bit limit. Clamp to `INT_MAX` or `INT_MIN` if it would.
5. Return `0` when no digits are found.

The implementation uses a `long long` accumulator and checks the limit before multiplication, so the conversion itself cannot overflow.

## Complexity
- **Time:** `O(n)`, where `n` is the input string length.
- **Auxiliary space:** `O(1)`.
