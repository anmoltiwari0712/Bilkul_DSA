#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumTotalDamage(vector<int>& power) {
        map<int, long long> total;
        for (int p : power) total[p] += p; // sum of damage for each unique power

        vector<int> uniquePowers;
        for (auto &it : total) uniquePowers.push_back(it.first);

        int n = uniquePowers.size();
        vector<long long> dp(n, 0);

        for (int i = 0; i < n; ++i) {
            long long include = total[uniquePowers[i]];
            
            // find last index j such that uniquePowers[j] < uniquePowers[i] - 2
            int j = i - 1;
            while (j >= 0 && uniquePowers[j] >= uniquePowers[i] - 2) j--;
            if (j >= 0) include += dp[j];
            
            long long exclude = (i > 0 ? dp[i - 1] : 0);
            dp[i] = max(include, exclude);
        }

        return dp.back();
    }
};

