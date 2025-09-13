class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int maxlen=0;
        int left=0;
        int right=0;
        int freqarr[26]={0};
        int maxfreq=0;
        while(right<n){
            freqarr[s[right]-'A']++;
            // int window=right-left+1;
            maxfreq=max(maxfreq,freqarr[s[right]-'A']);
            // int req=window-maxfreq;
            while((right-left+1)-maxfreq>k){
                freqarr[s[left] - 'A']--; 
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};