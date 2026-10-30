class Solution {
public: 
    int atmostk(vector<int>& nums, int k ){
        int n=nums.size();
        int low=0;
        int high=0;

        int count=0;

        unordered_map<int,int> mpp;

        while(high<n){
            mpp[nums[high]]++;

            while(mpp.size()>k){
                mpp[nums[low]]--;

                if(mpp[nums[low]]==0){
                    mpp.erase(nums[low]);
                }
                low++;
            }
            count+=high-low+1;
            high++;
        }
        
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostk(nums,k) - atmostk(nums,k-1);
    }
};