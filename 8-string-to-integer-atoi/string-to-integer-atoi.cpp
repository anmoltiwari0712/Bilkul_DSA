class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.length();
        int sign=1;
        int result=0;

        while(i<n && s[i]==' '){
            i++;
        }

        if(i<n){
            if(s[i]=='-'){
                sign=-1;
                i++;
            }
            else if(s[i]=='+'){
                sign=1;
                i++;
            }
        }

        while(i<n && isdigit(s[i])){
            int digit=s[i]-'0';

            if(result>(INT_MAX-digit)/10){
                if(sign==1){
                    return INT_MAX;
                }
                else{
                    return INT_MIN;
                }
            }
            result=result*10+digit;
            i++;
        }
        return sign * result;

    }
};