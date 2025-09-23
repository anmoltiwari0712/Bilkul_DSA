class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();

        int left=0;
        int right=0;

        int count=0;
        int startindex=-1;
        int minlen=INT_MAX;

        int hash[256]={0};
        for(int i=0;i<m;i++){
            hash[t[i]]++;
        }

        while(right<n){
            if(hash[s[right]]>0){
                count++;
            }
            hash[s[right]]--;
            while(count==m){
                if(right-left+1<minlen){
                    minlen=right-left+1;
                    startindex=left;
                }
                hash[s[left]]++;
                if(hash[s[left]]>0){
                    count--;
                }
                left++;

            }
            right++;
        }
        if(startindex==-1){
            return "";
        }
        else{
            return s.substr(startindex,minlen);
        }

    }
};