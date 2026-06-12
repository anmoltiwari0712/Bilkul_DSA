class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=i;j<n;j++){
                temp=temp+s[j];
                string res=temp;
                reverse(res.begin(),res.end());
                if(temp==res){
                    count++;
                }
            }

        }
        return count;
    }
};