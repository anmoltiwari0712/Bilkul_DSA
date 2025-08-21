class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=0;
        int maxprod=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                prod=(nums[i]-1)*(nums[j]-1);
                maxprod=max(maxprod,prod);
                
            }
           
        }
        return maxprod;
    }
};