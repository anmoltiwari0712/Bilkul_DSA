class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n=words.size();
        int count=0;
        for(int i=0;i<n;i++){
            string temp=words[i];
            bool isprefix=true;
            //either use substring function or try iterating
            for(int j=0;j<temp.length();j++){
                if(s[j]==temp[j]){
                    continue;
                }
                else{
                    isprefix=false;
                    break;
                }

            }
            if(isprefix==true){
                count++;
            }
        }
        return count;
    }
};