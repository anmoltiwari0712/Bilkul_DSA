class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        int ans=0;
        int prevlen=0;
        int i=0;
        while(i<n){
            int j=i;
            while(j<n && s[i]==s[j]){
                j++;
            }
            int currlen=j-i;
            ans=ans+min(currlen,prevlen);
            prevlen=currlen;
            i=j;
        }
        return ans;
    }
};