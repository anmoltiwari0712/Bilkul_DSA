class Solution {
public:

    void dfs(int row, int col, vector<vector<int>>& ans, vector<vector<int>>& image, int newcolor, int deltrow[], int deltcol[], int initialcolor){
        ans[row][col]=newcolor;
        int n=image.size();
        int m=image[0].size();

        for(int i=0;i<4;i++){
            int newrow = row + deltrow[i];
            int newcol = col + deltcol[i];

            if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && image[newrow][newcol]==initialcolor && ans[newrow][newcol]!=newcolor){
                dfs(newrow, newcol, ans, image,newcolor, deltrow, deltcol, initialcolor);
            }

        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initalcolor=image[sr][sc];

        vector<vector<int>> ans=image; //duplicate basically to iterate

        int deltrow[]={-1,0,+1,0};
        int deltcol[]={0,+1,0,-1};

        dfs(sr, sc, ans, image, color, deltrow, deltcol, initalcolor);

        return ans;
    }
};