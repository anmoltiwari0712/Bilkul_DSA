class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        
        int sum=0;
        int maxsum=INT_MIN;

        int totalsum=0;

        int sumnew=0;
        int minsum=INT_MAX;

        for(int i=0;i<n;i++){

            totalsum=totalsum+nums[i];

            sum=sum+nums[i];
            maxsum=max(maxsum,sum);

            if(sum<0){
                sum=0;
            }

            sumnew=sumnew+nums[i];
            minsum=min(minsum,sumnew);

            if(sumnew>0){
                sumnew=0;
            }


        }
        if(minsum==totalsum){
            return maxsum;
        }
        else{
            return max(maxsum,totalsum-minsum);
        }
    }
};