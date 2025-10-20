class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count=0;
        int n=operations.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                if(operations[i][j]=='+'){
                    count++;
                    break;
                }
                else if(operations[i][j]=='-'){
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};