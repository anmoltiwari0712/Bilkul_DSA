class Solution {
public:

    vector<vector<int>> verticalTraversal(TreeNode* root) {

        // column -> row -> sorted values
        map<int, map<int, multiset<int>>> nodes;

        // Queue stores:
        // Node, Row, Column
        queue<pair<TreeNode*, pair<int,int>>> q;

        q.push({root, {0, 0}});

        while(!q.empty()){

            TreeNode* currentNode = q.front().first;

            int currentRow = q.front().second.first;
            int currentColumn = q.front().second.second;

            q.pop();

            // Store the node
            nodes[currentColumn][currentRow].insert(currentNode->val);

            // Left Child
            if(currentNode->left){

                q.push({
                    currentNode->left,
                    {currentRow + 1, currentColumn - 1}
                });

            }

            // Right Child
            if(currentNode->right){

                q.push({
                    currentNode->right,
                    {currentRow + 1, currentColumn + 1}
                });

            }
        }

        vector<vector<int>> answer;

        // Traverse every column
        for(auto column : nodes){

            vector<int> oneColumn;

            // Traverse every row in that column
            for(auto row : column.second){

                // Traverse all values
                for(auto value : row.second){

                    oneColumn.push_back(value);

                }
            }

            answer.push_back(oneColumn);
        }

        return answer;
    }
};