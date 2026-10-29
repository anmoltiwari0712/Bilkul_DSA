class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();

        int low=0;
        int high=0;

        int minlen=INT_MAX;

        int sum=0;

        while(high<n){
            sum+=nums[high];

            while(sum>=target){
                int currlen=high-low+1;
                minlen=min(currlen,minlen);

                sum=sum-nums[low];
                low++;
            }

            high++;
        }
        if(minlen==INT_MAX){
            return 0;
        }
        return minlen;
    }
};