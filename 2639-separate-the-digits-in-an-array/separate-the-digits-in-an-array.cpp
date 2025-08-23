class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            vector<int> temp;
            int ans=nums[i];
            while(ans>0){
                temp.push_back(ans%10);
                ans=ans/10;
            }
            reverse(temp.begin(),temp.end());
            res.insert(res.end(),temp.begin(),temp.end());
        }
        return res;
    }
};