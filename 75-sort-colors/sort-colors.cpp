class Solution {
public:
    void sortColors(vector<int>& nums) {
        int coz=0; //count of zeroes
        int coo=0; //count of ones
        int cot=0; //count of twos

        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                coz++;
            }
            else if(nums[i]==1){
                coo++;
            }
            else{
                cot++;
            }
        }
        for(int i=0;i<coz;i++){
            nums[i]=0;
        }
        for(int i=coz;i<coz+coo;i++){
            nums[i]=1;
        }
        for(int i=coz+coo;i<n;i++){
            nums[i]=2;
        }
    }
};