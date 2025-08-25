class Solution {
public:
    bool issorted(vector<int>& nums){
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                return false;
            }
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int operations=0;
        while(!issorted(nums)){
            int minsum=INT_MAX;
            int index=-1;

            for(int i=0;i<nums.size()-1;i++){
                int sum=nums[i]+nums[i+1];
                if(sum<minsum){
                    minsum=sum;
                    index=i;
                }
            }
            nums[index]=minsum;
            nums.erase(nums.begin()+index+1);
            operations++;

        }
        return operations;
    }
};