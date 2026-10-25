class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mpp;

        int prefixsum=0;
        mpp[0]=-1;

        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
            int rem=prefixsum%k;

            if(mpp.find(rem)!=mpp.end()){
                int len=i-mpp[rem];
                if(len>=2){
                    return true;
                }
            }
            else{
                mpp[rem]=i;
            }
        }
        return false;
    }
};