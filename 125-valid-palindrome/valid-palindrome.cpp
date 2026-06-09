class Solution {
public:
    char tolowercase(char ch){
        if(ch>='A' && ch<='Z'){
            return ch + 32;
        }
        return ch;
    }
    bool isvalid(char ch){
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        string clean="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(isvalid(s[i])){
                clean.push_back(tolowercase(s[i]));
            }
        }
        string temp=clean;
        reverse(temp.begin(),temp.end());
        if(temp==clean){
            return true;
        }
        return false;
    }
};