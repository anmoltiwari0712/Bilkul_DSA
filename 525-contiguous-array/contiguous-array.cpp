class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int n=nums.size();

       unordered_map<int,int> mpp;  //prefixsum,index
       mpp[0]=-1;

       int maxlen=0;
       int sum=0;

       for(int i=0;i<n;i++){
            if(nums[i]==0){
                sum++;
            }
            else{
                sum--;
            }
            if(mpp.find(sum)!=mpp.end()){
                maxlen=max(maxlen,i-mpp[sum]);
            }
            else{
                mpp[sum]=i; 
            }
       }
       return maxlen;

       
    }
};