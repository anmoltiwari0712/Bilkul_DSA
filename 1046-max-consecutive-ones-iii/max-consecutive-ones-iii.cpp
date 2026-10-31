class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0;
        int high=0;
        int maxlen=0;
        int count=0;

        while(high<n){
            if(nums[high]==0){
                count++;
            }

            while(count>k){
                if(nums[low]==0){
                    count--;
                }
                low++;
            }
            maxlen=max(maxlen,high-low+1);
            high++;

            
        }
        return maxlen;
    }
};