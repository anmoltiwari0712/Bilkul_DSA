class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.length()>2){
            string next="";
            for(int i=0;i<s.length()-1;i++){
                int a = s[i] - '0';
                int b = s[i+1] - '0';
                int sum=(a+b)%10;
                next=next+to_string(sum);
            }
            s=next;
        }
        if(s[0]==s[1]){
            return true;
        }
        else{
            return false;
        }
    }
};