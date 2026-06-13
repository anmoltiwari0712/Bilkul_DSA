class Solution {
public:
    static bool cmp(pair<char,int>& a, pair<char,int>& b){
        return a.second > b.second;
    }

    string frequencySort(string s) {

        map<char,int> mpp;

        for(int i = 0; i < s.length(); i++){
            mpp[s[i]]++;
        }

        vector<pair<char,int>> vec;

        for(auto it : mpp){
            vec.push_back({it.first, it.second});
        }

        sort(vec.begin(), vec.end(), cmp);

        string res = "";

        for(auto it : vec){

            while(it.second > 0){
                res += it.first;
                it.second--;
            }

        }

        return res;
    }
};
