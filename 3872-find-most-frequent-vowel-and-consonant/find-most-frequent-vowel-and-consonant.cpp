class Solution {
public:
    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    int maxFreqSum(string s) {
        int n=s.length();
        map<int,int> mpp;
        map<int,int> nvowel;
        int maxval=0;
        int maxval2=0;
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                mpp[s[i]]++;
            }
            else{
                nvowel[s[i]]++;
            }
        }
        for(auto& it:mpp){
            if(it.second>maxval){
                maxval=max(maxval,it.second);
            }
        }
        for(auto& it:nvowel){
            if(it.second>maxval2){
                maxval2=max(maxval2,it.second);
            }
        }
        return maxval+maxval2;
    }
};