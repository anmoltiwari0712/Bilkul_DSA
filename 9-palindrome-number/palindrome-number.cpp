class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string s="";
        while(x>0){
            int rem=x%10;
            char ch=rem + '0';
            s= s + ch;
            x=x/10;
        }
        string rev="";
        rev=s;
        reverse(rev.begin(),rev.end());
        if(rev==s){
            return true;
        }

        return false;
    }
};