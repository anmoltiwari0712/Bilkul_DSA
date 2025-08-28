class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mpp1;
        map<char,int> mpp2;
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2){
            return false;
        }
        for(int i=0;i<n1;i++){
            mpp1[s[i]]++;
        }
        for(int i=0;i<n2;i++){
            mpp2[t[i]]++;
        }
        for(int i=0;i<mpp1.size();i++){
            if(mpp1[i]!=mpp2[i]){
                return false;
            }
        }
        return true;

    }
};