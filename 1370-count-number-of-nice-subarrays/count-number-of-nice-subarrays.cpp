class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();

        int count=0;
        int prefixsum=0;

        unordered_map<int,int> mpp;
        mpp[0]=1;

        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                prefixsum++;
            }

            int target=prefixsum-k;

            if(mpp.find(target)!=mpp.end()){
                count=count+mpp[target];
            }
            mpp[prefixsum]++;
        }
        return count;
    }
};