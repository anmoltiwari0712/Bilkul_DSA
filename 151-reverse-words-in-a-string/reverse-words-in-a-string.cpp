class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string result="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                continue;
            }
            string word="";
            while(i<n && s[i]!=' '){
                word=word+s[i];
                i++;
            }
            st.push(word);
        }
        while(!st.empty()){
            result=result+st.top();
            st.pop();
            if(st.size()!=0){
                result=result+" ";
            }
            
        }
        return result;
    }
};