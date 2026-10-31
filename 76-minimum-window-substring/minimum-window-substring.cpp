class Solution {
public:
    string minWindow(string s, string t) {
        int n1=s.length();
        int n2=t.length();

        if(n2>n1){
            return "";
        }

        unordered_map<int,int> mpp;

        for(int i=0;i<n2;i++){
            mpp[t[i]]++;
        }

        int low=0;
        int high=0;
        int count=0;
        int minlen=INT_MAX;
        int startind=-1;
        
        while(high<n1){
            if(mpp[s[high]]>0){
                count++;
            }

            mpp[s[high]]--;

            while(count==n2){
                if(high-low+1<minlen){
                    minlen=high-low+1;
                    startind=low;
                }

                mpp[s[low]]++;

                if(mpp[s[low]]>0){
                    count--;
                }
                low++;
            }
            high++;
        }
        if(startind==-1){
            return "";
        }
        else{
            return s.substr(startind,minlen);
        }

    }
};