class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();

        int prefixsum=0;
        int count=0;

        unordered_map<int,int> mpp;
        mpp[0]=1;

        for(int i=0;i<n;i++){
            prefixsum+=nums[i];
            int target=prefixsum-goal;

            if(mpp.find(target)!=mpp.end()){
                count+=mpp[target];
            }

            mpp[prefixsum]++;
            
        }
        return count;
    }
};