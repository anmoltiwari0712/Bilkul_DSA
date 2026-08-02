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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, map<int,multiset<int>>> nodes;

        queue<pair<TreeNode*, pair<int,int>>> q;

        q.push({root,{0,0}});

        while(!q.empty()){
            TreeNode* currentNode = q.front().first;
            int currentcol=q.front().second.first;
            int currentrow=q.front().second.second;

            nodes[currentcol][currentrow].insert(currentNode->val);

            q.pop();

            if(currentNode->left){
                q.push({currentNode->left,{currentcol-1,currentrow+1}});
            }

            if(currentNode->right){
                q.push({currentNode->right,{currentcol+1,currentrow+1}});
            }

        }

        vector<vector<int>> ans;

        for(auto column:nodes){
            vector<int> onecolumn;

            for(auto row: column.second){

                for(auto val: row.second){
                    onecolumn.push_back(val);
                }
            }
            ans.push_back(onecolumn);
        }
        return ans;
    }
};