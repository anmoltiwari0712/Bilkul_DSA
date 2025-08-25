class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int result=0;
        for(int i=0;i<n;i++){
            set<int> distinct;
            for(int j=i;j<n;j++){
                distinct.insert(nums[j]);
                int count=distinct.size();
                result=result+count*count;
            }

        }
        return result;
    }
};