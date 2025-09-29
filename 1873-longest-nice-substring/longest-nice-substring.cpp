#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNice(const string& sub) {
        unordered_set<char> st(sub.begin(), sub.end());
        for (char c : st) {
            if (st.count(tolower(c)) == 0 || st.count(toupper(c)) == 0) {
                return false;
            }
        }
        return true;
    }

    string longestNiceSubstring(string s) {
        int n = s.size();
        string ans = "";

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                string sub = s.substr(i, j - i + 1);
                if (isNice(sub)) {
                    if (sub.size() > ans.size()) {
                        ans = sub;
                    }
                }
            }
        }
        return ans;
    }
};
