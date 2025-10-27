class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        vector<int> arr;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    count++;
                }
            }
            if(count>0){
                arr.push_back(count);
            }
            
        }
        if(arr.size()<2){
            return 0;
        }
        int sum=0;
        for(int i=0;i<arr.size()-1;i++){
            sum=sum+(arr[i]*arr[i+1]);
        }
        return sum;
        
    }
};