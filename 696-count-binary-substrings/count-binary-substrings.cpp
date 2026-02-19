class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        int i=0;
        int ans=0;
        int prelen=0;
        while(i<n){
            int j=i;
            
            while(j<n && s[j]==s[i]){
                j++;
            }
            int currlen = j - i;
            ans=ans+min(prelen,currlen);
            prelen=currlen;
            i=j;
        }
        return ans;

       
        
    }
};