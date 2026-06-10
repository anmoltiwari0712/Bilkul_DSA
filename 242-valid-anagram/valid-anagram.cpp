class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.length();
        int n2=t.length();

        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;


        if(n1!=n2){
            return false;
        }

        for(int i=0;i<n1;i++){
            mpp1[s[i]]++;
        }

        for(int i=0;i<n2;i++){
            mpp2[t[i]]++;
        }

        if(mpp1==mpp2){
            return true;
        }

        return false;
    }
};