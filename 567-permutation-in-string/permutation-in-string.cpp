class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.length();
        int n=s2.length();

        if (k > n) return false;

        unordered_map<int,int> mpp1;
        unordered_map<int,int> mpp2;

        for(int i=0;i<k;i++){
            mpp1[s1[i]]++;
            mpp2[s2[i]]++;
        }
        if (mpp1 == mpp2) return true;

        for(int i=k;i<n;i++){
            mpp2[s2[i-k]]--;

            if(mpp2[s2[i-k]]==0){
                mpp2.erase(s2[i-k]);
            }

            mpp2[s2[i]]++;

            if(mpp1==mpp2){
                return true;
            }
        }
        return false;


    }
};