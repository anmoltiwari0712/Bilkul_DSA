class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int bal=target-nums[i];

            if(mpp.find(bal)!=mpp.end()){
                return {mpp[bal],i};
            }
            mpp[nums[i]]=i;
        }
        return {0,0};

    }
};