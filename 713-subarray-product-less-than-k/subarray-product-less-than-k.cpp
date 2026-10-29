class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();

        int low=0;
        int high=0;

        int count=0;

        int prod=1;
        if(k<=1){
            return 0;
        }
        while(high<n){
            prod=prod*nums[high];
            

            while(prod>=k){
                prod/=nums[low];
                low++;
            }

            count+=high-low+1;
            high++;
        }
        return count;
    }
};