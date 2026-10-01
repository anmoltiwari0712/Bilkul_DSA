class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans;
        // int j=0;
        for(int i=0;i<n;){
            int j=i+1;
            while(j<n && nums[j]==nums[i]){
                j++;
            }
            if(j-i>n/3){
                ans.push_back(nums[i]);
            }
            i=j;
        }
        return ans;
    }
};