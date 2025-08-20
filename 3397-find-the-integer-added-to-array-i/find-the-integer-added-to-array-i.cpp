class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int sum1,sum2=0;
        for(int i=0;i<nums1.size();i++){
            sum1=sum1+nums1[i];
        }
        for(int i=0;i<nums1.size();i++){
            sum2=sum2+nums2[i];
        }
        return (sum2-sum1)/n;
    }
};