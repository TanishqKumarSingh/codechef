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