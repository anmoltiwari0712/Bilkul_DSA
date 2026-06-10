class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1=s.length();
        int n2=t.length();

        if(n1!=n2){
            return false;
        }

        map<char,char> mpp1;
        map<char,char> mpp2;

        for(int i=0;i<n1;i++){
            if(mpp1.find(s[i])==mpp1.end() && mpp2.find(t[i])==mpp2.end()){
                mpp1[s[i]]=t[i];
                mpp2[t[i]]=s[i];
            }
            else{
                if(mpp1[s[i]]!=t[i] && mpp2[t[i]]!=s[i]){
                    return false;
                }
            }
        }
        return true;

        
    }
};