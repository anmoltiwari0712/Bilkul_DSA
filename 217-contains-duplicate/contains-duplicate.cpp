class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        if(st.size()!=nums.size()){
            return true;
        }
        return false;
    }
};