# Subsets

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of  **unique**  elements, return  *all possible*   *subsets*   *(the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [[],[0]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10
- All the numbers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 7.63%)  
**Memory:** 17.1 MB (beats 5.06%)  
**Submitted:** 2026-09-14T09:00:44.392Z  

```cpp
class Solution {
public:
vector<vector<int>>ans;
void Helper(vector<int>nums,int i,vector<int>temp){
    int n=nums.size();
    if(i==n)
     ans.push_back(temp);

    else{
        
        Helper(nums,i+1,temp);
         
        
        temp.push_back(nums[i]);
        Helper(nums,i+1,temp);
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        Helper(nums,0,temp);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)