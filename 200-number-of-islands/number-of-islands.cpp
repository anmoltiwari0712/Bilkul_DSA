class Solution {
public:
    void dfs(int row, int col, vector<vector<char>>& grid){

        int n=grid.size();
        int m=grid[0].size();

        grid[row][col] = '0';

        int deltrow[]={-1,0,1,0};
        int deltcol[]={0,1,0,-1};


        for(int i=0;i<4;i++){
            int newrow = row + deltrow[i];
            int newcol = col + deltcol[i];
            if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && grid[newrow][newcol]=='1'){
                dfs(newrow,newcol,grid);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();   //rows
        int m=grid[0].size();  //cols

        int islands=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    islands++;
                    dfs(i,j,grid);
                }
            }
        }
        return islands;
    }
};