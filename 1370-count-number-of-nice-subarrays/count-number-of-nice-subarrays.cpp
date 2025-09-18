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
            sum=sum+(nums[right]%2);
            while(sum>goal){
                sum=sum-(nums[left]%2);
                left++;
            }
            ans=ans+(right-left+1);
            right++;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return lessthanorequalgoal(nums, k) - lessthanorequalgoal(nums, k - 1);
    }
};