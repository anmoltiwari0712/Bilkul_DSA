class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> lsum(n);
        vector<int> rsum(n);
        lsum[0]=height[0];
        rsum[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            lsum[i]=max(height[i],lsum[i-1]);
        }

        for(int i=n-2;i>=0;i--){
            rsum[i]=max(height[i],rsum[i+1]);
        }
        int water=0;
        for(int i=0;i<n;i++){
            water+=min(lsum[i],rsum[i])-height[i];
        }
        return water;
    }
};