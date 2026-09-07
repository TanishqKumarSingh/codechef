# Count Odd Numbers in an Interval Range

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two non-negative integers `low` and `high`. Return the  *count of odd numbers between* `low` *and* `high` *(inclusive)*.

 

 **Example 1:** 

```
Input: low = 3, high = 7
Output: 3
Explanation: The odd numbers between 3 and 7 are [3,5,7].
```

 **Example 2:** 

```
Input: low = 8, high = 10
Output: 1
Explanation: The odd numbers between 8 and 10 are [9].
```

 

 **Constraints:** 

- 0 <= low <= high <= 10^9

## Solution

**Language:** C++  
**Runtime:** 1722 ms (beats 26.46%)  
**Memory:** 7.9 MB (beats 5.38%)  
**Submitted:** 2026-09-07T19:50:49.863Z  

```cpp
class Solution {
public:
    int countOdds(int low, int high) {
        int count = 0;

        for (int i = low; i <= high; i++) {
            if (i % 2 != 0) {
                count++;
            }
        }

        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/)