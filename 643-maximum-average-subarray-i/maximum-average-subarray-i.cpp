class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int maxsum;

        int sum=0;

        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }

        maxsum=sum;

        for(int i=k;i<n;i++){
            sum=sum-nums[i-k];
            sum=sum+nums[i];
            maxsum=max(sum,maxsum);
        }

        return (double)maxsum/k;


    }
};