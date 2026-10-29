class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long long low=0;
        long long high=0;

        long long sum=0;
        unordered_map<int,int> mpp;

        long long maxsum=0;

        while(high<n){
            sum+=nums[high];
            mpp[nums[high]]++;

            //if window is greater than k
            if(high-low+1>k){
                sum=sum-nums[low];

                mpp[nums[low]]--;
                if(mpp[nums[low]]==0){
                    mpp.erase(nums[low]);
                }
                low++;
            }

            if(high-low+1==k && mpp.size()==k){
                maxsum=max(sum,maxsum);
            }
            high++;
        }
        return maxsum;
    }
};