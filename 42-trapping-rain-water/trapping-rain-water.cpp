class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();

        vector<int> lmax(n);
        vector<int> rmax(n);

        lmax[0]=height[0];  //
        rmax[n-1]=height[n-1]; //

        //Building prefix - leftmax

        for(int i=1;i<n;i++){
            lmax[i]=max(lmax[i-1],height[i]);
        }

        //building suffix - right max

        for(int i=n-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],height[i]);
        }
        
        int total=0;

        for(int i=0;i<n;i++){
            int water=min(lmax[i],rmax[i])-height[i];
            total=total+water;
        }

        return total;
    }
};