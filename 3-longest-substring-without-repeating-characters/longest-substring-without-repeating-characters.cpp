class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int hasharray[256];
        for (int i = 0; i < 256; i++) hasharray[i] = -1;
        int left=0;
        int right=0;
        int maxlen=0;
        int len=0;
        while(right<n){
            if(hasharray[s[right]]>=left){
                left=hasharray[s[right]]+1;
            }
            hasharray[s[right]]=right;
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;

    }
};