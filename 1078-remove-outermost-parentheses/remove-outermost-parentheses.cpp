class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        string res="";
        int balance=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(balance>0){
                    res=res+s[i];
                }
                balance++;
            }
            else{
                balance--;
                if(balance>0){
                    res=res+s[i];
                }
            }
        }
        return res;
    }
};