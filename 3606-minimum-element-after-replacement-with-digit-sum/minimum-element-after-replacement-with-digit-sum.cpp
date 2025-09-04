class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int minval=INT_MAX;
        // vector<int> temp;??
        for(int i=0;i<n;i++){
            int sum=0;
            int val=nums[i];
            while(val>0){
                int lastdigit=val%10;
                val=val/10;
                sum=sum+lastdigit;

            }
            // temp.push_back(sum);
            minval=min(minval,sum);
        }
       return minval;
    }
};