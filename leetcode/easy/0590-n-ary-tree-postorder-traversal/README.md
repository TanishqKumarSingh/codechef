# N-ary Tree Postorder Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the `root` of an n-ary tree, return  *the postorder traversal of its nodes' values*.

Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value (See examples)

 

 **Example 1:** 

```
Input: root = [1,null,3,2,4,null,5,6]
Output: [5,6,3,2,4,1]

```

 **Example 2:** 

```
Input: root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
Output: [2,6,14,11,7,3,12,8,4,13,9,10,5,1]

```

 

 **Constraints:** 

- The number of nodes in the tree is in the range [0, 104].
- 0 <= Node.val <= 104
- The height of the n-ary tree is less than or equal to 1000.

 

 **Follow up:**  Recursive solution is trivial, could you do it iteratively?

## Solution

**Language:** C++  
**Runtime:** 10 ms (beats 80.42%)  
**Memory:** 15.6 MB (beats 50.29%)  
**Submitted:** 2026-10-01T09:11:43.844Z  

```cpp
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;
        stack<Node*> st;

        if (root == nullptr)
            return ans;

        st.push(root);

        while (!st.empty()) {
            Node* curr = st.top();
            st.pop();

            ans.push_back(curr->val);

            for (Node* child : curr->children) {
                st.push(child);
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/n-ary-tree-postorder-traversal/)