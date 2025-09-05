class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n=s.length();
        string res="";
        for(int i=0;i<n;i++){
            res=res+s[(i+k)%n];
        }
        return res;
    }
};