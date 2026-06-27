/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode* root, vector<int>& ans){
        TreeNode* node=root;

        stack<TreeNode*> st;

        while(node!=NULL || !st.empty()){
            if(node!=NULL){
                ans.push_back(node->val);
                st.push(node);
                node=node->left;
            }
            else{
                node = st.top();
                st.pop();
                node=node->right;
            }
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root,ans);

        return ans;
    }
};