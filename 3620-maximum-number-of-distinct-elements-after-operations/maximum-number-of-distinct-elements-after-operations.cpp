class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int prevmax=INT_MIN;
        int count=0;
        for(int i=0;i<n;i++){
            int lowerbound=nums[i]-k;
            int upperbound=nums[i]+k;

            if(prevmax<lowerbound){
                prevmax=lowerbound;
                count++;
            }
            else if(prevmax<upperbound){
                prevmax++;
                count++;
            }
        }
        return count;
    }
};