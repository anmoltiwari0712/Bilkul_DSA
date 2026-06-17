class Solution {
public:

    void dfs(int row,
             int col,
             vector<vector<int>>& heights,
             vector<vector<int>>& visited){

        int n = heights.size();
        int m = heights[0].size();

        visited[row][col] = 1;

        int deltrow[] = {-1,0,1,0};
        int deltcol[] = {0,1,0,-1};

        for(int i=0;i<4;i++){

            int newrow = row + deltrow[i];
            int newcol = col + deltcol[i];

            if(newrow >= 0 &&
               newrow < n &&
               newcol >= 0 &&
               newcol < m &&
               heights[newrow][newcol] >= heights[row][col] &&
               !visited[newrow][newcol]){

                dfs(newrow,newcol,heights,visited);
            }
        }
    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {

        int n = heights.size();
        int m = heights[0].size();

        vector<vector<int>> visitedpacific(n,vector<int>(m,0));
        vector<vector<int>> visitedatlantic(n,vector<int>(m,0));

        // Top row (Pacific)
        for(int col=0;col<m;col++){
            dfs(0,col,heights,visitedpacific);
        }

        // Left column (Pacific)
        for(int row=0;row<n;row++){
            dfs(row,0,heights,visitedpacific);
        }

        // Bottom row (Atlantic)
        for(int col=0;col<m;col++){
            dfs(n-1,col,heights,visitedatlantic);
        }

        // Right column (Atlantic)
        for(int row=0;row<n;row++){
            dfs(row,m-1,heights,visitedatlantic);
        }

        vector<vector<int>> answer;

        // Find cells reachable by both oceans
        for(int row=0;row<n;row++){

            for(int col=0;col<m;col++){

                if(visitedpacific[row][col] &&
                   visitedatlantic[row][col]){

                    answer.push_back({row,col});
                }
            }
        }

        return answer;
    }
};