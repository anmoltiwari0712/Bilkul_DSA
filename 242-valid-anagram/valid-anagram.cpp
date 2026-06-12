class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();

        if(n!=m){
            return false;
        }

        map<char,int> mpp1;
        map<char,int> mpp2;

        for(int i=0;i<n;i++){
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }

        if(mpp1==mpp2){
            return true;
        }

        return false;

    }
};