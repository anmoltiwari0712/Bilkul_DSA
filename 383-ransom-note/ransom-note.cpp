class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1=ransomNote.size();
        int n2=magazine.size();

        map<int,int> mpp1;
        map<int,int> mpp2;

        for(int i=0;i<n1;i++){
            mpp1[ransomNote[i]]++;
        }

        for(int i=0;i<n2;i++){
            mpp2[magazine[i]]++;
        }

        for(auto& it:mpp1){
            if(mpp2.find(it.first)==mpp2.end() || mpp2[it.first]<mpp1[it.first]){
                return false;
            }
        }
        
        return true;
    }
};