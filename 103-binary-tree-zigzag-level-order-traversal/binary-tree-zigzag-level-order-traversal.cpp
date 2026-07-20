class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        vector<vector<int>> result;

        if(root == NULL){
            return result;
        }

        queue<TreeNode*> q;
        q.push(root);

        bool leftorright = true;

        while(!q.empty()){

            int size = q.size();
            vector<int> level;

            for(int i = 0; i < size; i++){

                TreeNode* node = q.front();
                q.pop();

                level.push_back(node->val);

                if(node->left != NULL){
                    q.push(node->left);
                }

                if(node->right != NULL){
                    q.push(node->right);
                }
            }

            if(!leftorright){
                reverse(level.begin(), level.end());
            }

            result.push_back(level);

            leftorright = !leftorright;
        }

        return result;
    }
};