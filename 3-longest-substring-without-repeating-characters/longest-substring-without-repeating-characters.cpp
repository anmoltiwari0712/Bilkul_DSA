class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxlen=0;
        for(int i=0;i<n;i++){
            int len=0;
            int freqarr[256]={0};
            for(int j=i;j<n;j++){
                if(freqarr[s[j]]==1){
                    break;
                }
                len=j-i+1;
                maxlen=max(maxlen,len);
                freqarr[s[j]]++;
            }
        }
        return maxlen;
    }
};