class Solution {
public:

    int intermediate(vector<int>& nums, int k){
        int left=0;
        int right=0;
        int n=nums.size();
        int count=0;
        map<int,int> mpp;

        while(right<n){
            mpp[nums[right]]++;
            while(mpp.size()>k){
                mpp[nums[left]]--;
                if(mpp[nums[left]]==0){
                    mpp.erase(nums[left]);
                }
                left++;
            }
            count=count+(right-left+1);
            right++;

        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return intermediate(nums,k)-intermediate(nums,k-1);
    }
};