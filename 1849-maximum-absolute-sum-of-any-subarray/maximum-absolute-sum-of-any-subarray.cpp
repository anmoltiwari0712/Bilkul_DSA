class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();

        int sum1=0;
        int sum2=0;
        int maxsum=INT_MIN;
        int minsum=INT_MAX;

        for(int i=0;i<n;i++){
            sum1=sum1+nums[i];
            maxsum=max(maxsum,sum1);

            if(sum1<0){
                sum1=0;
            }

            sum2=sum2+nums[i];
            minsum=min(minsum,sum2);

            if(sum2>0){
                sum2=0;
            }
        }
        return max(abs(minsum),maxsum);
    }
};