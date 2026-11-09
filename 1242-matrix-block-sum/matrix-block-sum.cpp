class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m=mat.size(); //row
        int n=mat[0].size(); //col

        vector<vector<int>> answer(m, vector<int>(n, 0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                int sum=0;
                for(int row=i-k;row<=i+k;row++){
                    for(int col=j-k;col<=j+k;col++){
                        if(row>=0 && row<m && col>=0 && col<n){
                            sum=sum+mat[row][col];
                        }
                    }
                }
                answer[i][j]=sum;
            }
        }
        return answer;
    }
};