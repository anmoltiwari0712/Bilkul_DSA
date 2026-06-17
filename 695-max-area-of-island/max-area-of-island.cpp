class Solution {
public:
    int dfs(int row,int col,vector<vector<int>>& grid){
        int n=grid.size();
        int m=grid[0].size();

        grid[row][col]=0;

        int area=1;

        int deltrow[]={-1,0,1,0};
        int deltcol[]={0,1,0,-1};

        for(int i=0;i<4;i++){
            int newrow= row + deltrow[i];
            int newcol= col + deltcol[i];

            if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && grid[newrow][newcol]==1){
                area=area+dfs(newrow,newcol,grid);
            }

        }
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        int maxarea=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    int currentarea=dfs(i,j,grid);
                    maxarea=max(maxarea,currentarea);
                }
            }
        }
        return maxarea;
    }
};