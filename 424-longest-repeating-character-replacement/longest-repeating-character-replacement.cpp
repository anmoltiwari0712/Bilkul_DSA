class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int right=0;
        int n=s.length();

        int freqarr[26]={0};
        int maxfreq=0;
        int maxlen=0;

        while(right<n){
            freqarr[s[right]-'A']++;
            maxfreq=max(maxfreq,freqarr[s[right]-'A']);
            // int window=right-left+1;
            while((right-left+1)-maxfreq>k){
                freqarr[s[left]-'A']--;
                left++;
            }
            maxlen=max(right-left+1,maxlen);
            right++;
        }

        return maxlen;
    }
};