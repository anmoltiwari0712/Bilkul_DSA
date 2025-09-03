class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        string res="";
        for(int i=0;i<n;i++){
            //computing for odd length
            int prev=i-1;
            int next=i+1;

            while(prev>=0 && next<=n && s[prev]==s[next]){
                prev--;
                next++;
            }
            if(next-prev-1>res.length()){
                res=s.substr(prev+1,next-prev-1);
            }

            //computing for even length;
            prev=i;
            next=i+1;

            while(prev>=0 && next<=n && s[prev]==s[next]){
                prev--;
                next++;
            }

            if(next-prev-1>res.length()){
                res=s.substr(prev+1,next-prev-1);
            }

        }
        return res;
    }
};