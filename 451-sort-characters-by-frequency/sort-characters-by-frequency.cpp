class Solution {
public:
    static bool cmp(pair<char,int>& a, pair<char,int>& b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        int n=s.length();

        map<char,int> mpp;

        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }

        vector<pair<char,int>> vect;

        for(auto it:mpp){
            vect.push_back({it.first,it.second});
        }

        sort(vect.begin(),vect.end(),cmp);

        string res="";

        for(auto it:vect){
            while(it.second>0){
                res+=it.first;
                it.second--;
            }
        }
        return res;
    }
};