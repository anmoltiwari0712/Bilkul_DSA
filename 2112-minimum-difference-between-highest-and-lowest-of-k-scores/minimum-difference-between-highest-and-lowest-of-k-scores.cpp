class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int left=0;
        int right=k-1;
        int minm=INT_MAX;

        while(right<n){
            int diff = nums[right] - nums[left];
            minm=min(minm,diff);

            left++;
            right++;
        }
        return minm;
    }
};