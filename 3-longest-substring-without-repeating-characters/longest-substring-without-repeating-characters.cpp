class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();

        int low=0;
        int high=0;
        int len=0;
        int maxlen=0;

        unordered_map<int,int> mpp;

        while(high<n){
            mpp[s[high]]++;

            while(mpp[s[high]]>1){
                mpp[s[low]]--;
                low++;

            }
            len=high-low+1;
            maxlen=max(maxlen,len);
            high++;

        }
        return maxlen;
    }
};