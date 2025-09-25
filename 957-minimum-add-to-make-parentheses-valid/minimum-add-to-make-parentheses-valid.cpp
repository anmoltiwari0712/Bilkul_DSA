class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        int balance=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                balance++;
            }
            else if(s[i]==')'){
                balance--;
            }
            if(balance<0){
                count++;
                balance=0;
            }
        }
        return balance+count;
    }
};