class Solution {
public:
    bool isAnagram(string &a, string &b) {
        if (a.size() != b.size()){
            return false;
        }
        unordered_map<char, int> mpp1, mpp2;
        for (char c : a){
            mpp1[c]++;
        } 
        for (char c : b){
            mpp2[c]++;
        } 
        return mpp1 == mpp2;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> res;
        for (auto &w : words) {
            if (res.empty() || !isAnagram(res.back(), w))
                res.push_back(w);
        }
        return res;
    }
};