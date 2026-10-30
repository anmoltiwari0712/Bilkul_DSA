class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        int k=p.length();

        if(k>n){
            return {};
        }

        vector<int> ans;

        unordered_map<int,int> mpp1;
        unordered_map<int,int> mpp2;

        for(int i=0;i<k;i++){
            mpp1[s[i]]++;
            mpp2[p[i]]++;
        }

        if(mpp1==mpp2){
            ans.push_back(0);
        }

        for(int i=k;i<n;i++){
            mpp1[s[i-k]]--;
            if (mpp1[s[i-k]] == 0) {
                mpp1.erase(s[i-k]);
            }
            mpp1[s[i]]++;

            if(mpp1==mpp2){
                ans.push_back(i-k+1);
            }
        }
        return ans;
    }
};