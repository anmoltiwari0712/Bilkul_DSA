class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maximum=INT_MIN;
        for(int i=0;i<n;i++){
            int prod=1;
            for(int j=i;j<n;j++){
                prod=prod*nums[j];
                maximum=max(prod,maximum);
            }
            
        }
        return maximum;
    }
};