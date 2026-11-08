class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        vector<int> leftprod(n);
        vector<int> rightprod(n);

        vector<int> ans(n);

        leftprod[0]=1;
        rightprod[n-1]=1;

        for(int i=1;i<n;i++){
            leftprod[i]=nums[i-1] * leftprod[i-1];
        }

        for(int i=n-2;i>=0;i--){
            rightprod[i]=nums[i+1] * rightprod[i+1];
        }

        for(int i=0;i<n;i++){
            ans[i] = rightprod[i] * leftprod[i];
        }
        return ans;
    }
};