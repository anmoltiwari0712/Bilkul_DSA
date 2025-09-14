class Solution {
public:
    int lessthanorequalgoal(vector<int>& nums,int goal){
        if(goal<0){
            return 0;
        }
        int left=0;
        int right=0;
        int n=nums.size();
        int sum=0;
        int ans=0;
        while(right<n){
            sum=sum+nums[right];
            while(sum>goal){
                sum=sum-nums[left];
                left++;
            }
            ans=ans+(right-left+1);
            right++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return lessthanorequalgoal(nums, goal) - lessthanorequalgoal(nums, goal - 1);
    }
};