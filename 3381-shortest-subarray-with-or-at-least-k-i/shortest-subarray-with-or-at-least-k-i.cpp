class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int len=n+1;
        for(int i=0;i<n;i++){
            int ans=0;
            for(int j=i;j<n;j++){
                ans= ans | nums[j];
                if(ans>=k){
                    len=min(len,j-i+1);
                    break;
                }
           }
        }
        if(len==n+1){
            return -1;
        }
        else{
            return len;
        }
    }
};