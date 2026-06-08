class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        vector<string> words;
        string temp="";
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                temp=temp+s[i];
            }
            else{
                if(temp!=""){
                    words.push_back(temp);
                    temp="";
                }
            }
        }
        if(temp!=""){
            words.push_back(temp);
        }

        string res="";
        for(int i=words.size()-1;i>=0;i--){
            res=res+words[i];
            if(i!=0){
                res=res+" ";
            }
        }
        return res;
    }
};