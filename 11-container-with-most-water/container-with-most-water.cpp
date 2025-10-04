class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;

        int area=0;
        int maxarea=0;

        while(left<right){
            area = (right - left) * min(height[left], height[right]);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
            maxarea=max(area,maxarea);
            
        }
        return maxarea;
    }
};