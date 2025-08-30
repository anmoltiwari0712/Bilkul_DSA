class Solution {
public:
    string frequencySort(string s) {

        auto cmp = [&](pair<char,int>&a,pair<char,int>&b){
            return a.second>b.second;
        };

        unordered_map<char,int> freq;
        for(char ch:s){
            freq[ch]++;
        }
        vector<pair<char,int>> freqarr;

        for(auto [ch,fq] : freq){
            freqarr.push_back({ch,fq});
        }

        sort(freqarr.begin(),freqarr.end(),cmp);

        string ans="";

        for(auto [ch,fq] : freqarr){
            ans.append(fq,ch);
        }

        return ans;
    }
};