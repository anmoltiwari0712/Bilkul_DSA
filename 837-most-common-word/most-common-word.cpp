class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int> mpp;
        set<string> bannedSet(banned.begin(), banned.end());
        string temp = "";
        int n = paragraph.size();

        for(int i = 0; i < n; i++){
            if(isalpha(paragraph[i])) {
                temp = temp + (char)tolower(paragraph[i]);
            } else {
                if(temp.size() > 0 && bannedSet.find(temp) == bannedSet.end()) {
                    mpp[temp]++;
                }
                temp.clear();
            }
        }

        if(temp.size() > 0 && bannedSet.find(temp) == bannedSet.end()) {
            mpp[temp]++;
        }

        string ans = "";
        int maxi = 0;
        for(auto it : mpp){
            if(it.second > maxi){
                maxi = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};
