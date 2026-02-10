class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
        int maxlen=0;
        for(int i=0;i<n;i++){
            set<int> oddnum;
            set<int> evennum;
            int len=0;
            for(int j=i;j<n;j++){
                if(nums[j]%2==0){
                    evennum.insert(nums[j]);
                }
                else{
                    oddnum.insert(nums[j]);
                }
                if(evennum.size()==oddnum.size()){
                    len=j-i+1;
                }
            }
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};