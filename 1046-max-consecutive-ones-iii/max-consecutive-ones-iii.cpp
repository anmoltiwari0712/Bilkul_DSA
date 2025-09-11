class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int right=0;
        int noofzeroes=0;
        int maxlen=0;
        while(right<n){
            if(nums[right]==0){
                noofzeroes++;
            }
            while(noofzeroes>k){
                if(nums[left]==0){
                    noofzeroes--;
                }
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};