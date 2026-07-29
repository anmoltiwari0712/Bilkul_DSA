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

        //col - row - sorted values
        map<int, map<int,multiset<int>>> nodes;

        //(nodes,(col,row))
        queue<pair<TreeNode*, pair<int,int>>> q;

        q.push({root,{0,0}});

        while(!q.empty()){

            TreeNode* currentnode=q.front().first;
            int currentcol=q.front().second.first;
            int currentrow=q.front().second.second;

            q.pop();

            nodes[currentcol][currentrow].insert(currentnode->val);

            if(currentnode->left){
                q.push({currentnode->left,{currentcol-1,currentrow+1}});
            }

            if(currentnode->right){
                q.push({currentnode->right,{currentcol+1,currentrow+1}});
            }
        }

        vector<vector<int>> ans;

        //traverse every col
        for(auto column: nodes){
            vector<int> onecolumn;
            
            //Traverse every row in that col
            for(auto row: column.second){

                for(auto value: row.second){
                    onecolumn.push_back(value);
                }
            }
            ans.push_back(onecolumn);
        }
        return ans;

    }
};