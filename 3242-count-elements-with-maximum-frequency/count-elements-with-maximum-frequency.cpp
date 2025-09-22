class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mpp;
        int n=nums.size();
        int count=0;
        int maxfreq=0;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]>maxfreq){
                maxfreq=mpp[nums[i]];
            }
        }
        
        for(auto& it:mpp){
            if(it.second==maxfreq){
                count=count+it.second;
            }
        }
        return count;

    }
};