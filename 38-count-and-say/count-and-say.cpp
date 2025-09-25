class Solution {
public:
    string solve(string s){
        int len=s.length();
        string ans="";

        if(s.length()==0){
            return "1";
        }

        for(int i=0;i<len;i++){
            int count=1;
            while(s[i]==s[i+1]){
                i++;
                count++;
            }
            ans=ans+to_string(count);
            ans=ans+s[i];
        }
        return ans;
    }
    string countAndSay(int n) {
        string ans="";
        while(n--){
            ans=solve(ans);
        }
        return ans;
    }
};