class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int num=nums[i];
            if(num<0){ //negative number handling
                num = (num % value + value) % value;
            }
            int rem=num%value;
            mpp[rem]++;
        }

        // int ans=0,req_val=0;
        int i=0;

        while(1){
            int new_rem=i%value;
            if((mpp.find(new_rem)!=mpp.end()) && (mpp[new_rem]>0)){
                mpp[new_rem]--;
                i++;
            }
            else{
                break;
            }            
        }
        return i;

        // return ans;
    }
};