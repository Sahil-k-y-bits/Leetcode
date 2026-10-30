# 11. Container With Most Water

**LeetCode:** https://leetcode.com/problems/container-with-most-water/

## Approach: Two Pointers
Start with pointers at both ends. The area is the distance between the pointers multiplied by the smaller height. Record the best area, then move the pointer at the shorter line inward: moving the taller line cannot improve the limiting height, while moving the shorter line is the only way to potentially find a taller boundary. Continue until the pointers meet.

## Complexity
- **Time:** O(n) — each pointer moves inward at most n times in total.
- **Space:** O(1) — only a constant number of variables are used.
