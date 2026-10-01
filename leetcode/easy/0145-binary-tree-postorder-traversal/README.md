# Binary Tree Postorder Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given the `root` of a binary tree, return  *the postorder traversal of its nodes' values*.

 

 **Example 1:** 

 **Input:**  root = [1,null,2,3]

 **Output:**  [3,2,1]

 **Explanation:** 

 **Example 2:** 

 **Input:**  root = [1,2,3,4,5,null,8,null,null,6,7,9]

 **Output:**  [4,6,7,5,2,9,8,3,1]

 **Explanation:** 

 **Example 3:** 

 **Input:**  root = []

 **Output:**  []

 **Example 4:** 

 **Input:**  root = [1]

 **Output:**  [1]

 

 **Constraints:** 

- The number of the nodes in the tree is in the range [0, 100].
- -100 <= Node.val <= 100

 

 **Follow up:**  Recursive solution is trivial, could you do it iteratively?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.8 MB (beats 92.93%)  
**Submitted:** 2026-10-01T08:51:33.512Z  

```cpp
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;

        if (root == nullptr)
            return ans;

        st.push(root);

        while (!st.empty()) {
            TreeNode* curr = st.top();
            st.pop();

            ans.push_back(curr->val);

            if (curr->left)
                st.push(curr->left);

            if (curr->right)
                st.push(curr->right);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/binary-tree-postorder-traversal/)