class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        int i=0;
        for(int element:st){
            nums[i]=element;
            i++;
        }

        int k=st.size();
        return k;
    }
};