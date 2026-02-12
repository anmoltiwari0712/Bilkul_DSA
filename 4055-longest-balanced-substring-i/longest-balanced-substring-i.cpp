class Solution {
public:
    int longestBalanced(string s) {
        int n = s.length();
        int maxlen = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<char, int> mpp;
            for (int j = i; j < n; j++) {
                mpp[s[j]]++;
                int ref = mpp.begin()->second;
                bool allEqual = true;
                for (auto& it : mpp) {
                    if (it.second != ref) {
                        allEqual = false;
                        break;
                    }
                }
                if (allEqual) {
                    int len = j - i + 1;
                    maxlen = max(len, maxlen);
                }
            }
        }
        return maxlen;
    }
};
