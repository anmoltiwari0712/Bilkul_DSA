class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n=nums.size();
        int len=0;
        for(int left=0;left<n;left++){
            if((nums[left]%2==0) && (nums[left]<=threshold)){
                int right=left+1;
                while(right<n && nums[right]%2!=nums[right-1]%2 && nums[right]<=threshold){
                    right++;
                }
                len=max(len,right-left);
            }
        }
        return len;
    }
};