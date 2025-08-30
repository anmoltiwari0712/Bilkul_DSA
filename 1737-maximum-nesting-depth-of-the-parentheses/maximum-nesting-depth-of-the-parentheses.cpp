class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int count=0;
        int n=s.size();
        int maxcount=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                maxcount=max(count,maxcount);
                count--;
            }
        }
        return maxcount;
    }
};