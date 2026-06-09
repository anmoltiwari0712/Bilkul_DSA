class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        vector<string> words;
        
        string res="";

        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                res=res+s[i];
            }
            else{
                if(res!=""){
                    words.push_back(res);
                    res="";
                }
            }
        }

        if(res!=""){
            words.push_back(res);
        }
        
        string temp="";
        for(int i=words.size()-1;i>=0;i--){
            temp=temp+words[i];
            if(i!=0){
                temp=temp+" ";
            }
        }
        return temp;
    }
};