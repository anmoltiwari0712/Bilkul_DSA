class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxlen=0;

        unordered_map<int,int> mpp;  //<prefixsum,firstoccurence>
        mpp[0]=-1;
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
                mpp[sum]=i; //storing first occurence of prefixsum
            }
        }
        return maxlen;
    }
};