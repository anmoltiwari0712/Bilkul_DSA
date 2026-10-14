class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;

        int water =0;
        int lmax=height[0];
        int rmax=height[n-1];
        while(left<right){

            if(lmax<rmax){
                left++;
                lmax=max(lmax,height[left]);
                water+=lmax-height[left];
            }
            else{
                right--;
                rmax=max(rmax,height[right]);
                water+=rmax-height[right];
            }

        }
        return water;
    }
};