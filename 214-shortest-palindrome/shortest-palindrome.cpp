class Solution {
public:
    vector<int> computelps(string pattern){
        // string newstring = pattern + '#' + txt;
        int n=pattern.length();
        vector<int> lps(n,0);
        int i=1;
        int len=0;

        while(i<n){
            if(pattern[i]==pattern[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0){
                    len=lps[len-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        return lps;
    }
    string shortestPalindrome(string s) {
        string rev=s;
        reverse(rev.begin(),rev.end());

        string combined = s + "#" + rev;
        vector<int> lps = computelps(combined);

        int val=lps.back();

        string suffix=s.substr(val);
        reverse(suffix.begin(),suffix.end());

        return suffix+s;
    }
};