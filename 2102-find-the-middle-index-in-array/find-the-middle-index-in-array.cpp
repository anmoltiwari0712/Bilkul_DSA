class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();

        int prefix=0;
        int totalsum=0;
        // int suffix=0;

        for(int i=0;i<n;i++){
            totalsum+=nums[i];
        }

        for(int i=0;i<n;i++){
            int suffix=totalsum-prefix-nums[i];

            if(prefix==suffix){
                return i;
            }
            prefix=prefix+nums[i];

        }
        return -1;
    }
};