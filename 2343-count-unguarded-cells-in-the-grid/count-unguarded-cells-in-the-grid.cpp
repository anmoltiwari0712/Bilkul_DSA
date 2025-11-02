#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0));
        // 0 = empty, 1 = guard, 2 = wall, 3 = guarded

        for (auto &g : guards) grid[g[0]][g[1]] = 1;
        for (auto &w : walls) grid[w[0]][w[1]] = 2;

        // Horizontal sweep (left -> right)
        for (int i = 0; i < m; i++) {
            bool seen = false;
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) seen = true;        // found guard
                else if (grid[i][j] == 2) seen = false;  // wall blocks view
                else if (seen) grid[i][j] = 3;           // mark as guarded
            }
            // Right -> Left sweep
            seen = false;
            for (int j = n - 1; j >= 0; j--) {
                if (grid[i][j] == 1) seen = true;
                else if (grid[i][j] == 2) seen = false;
                else if (seen) grid[i][j] = 3;
            }
        }

        // Vertical sweep (top -> bottom)
        for (int j = 0; j < n; j++) {
            bool seen = false;
            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 1) seen = true;
                else if (grid[i][j] == 2) seen = false;
                else if (seen) grid[i][j] = 3;
            }
            // Bottom -> Top sweep
            seen = false;
            for (int i = m - 1; i >= 0; i--) {
                if (grid[i][j] == 1) seen = true;
                else if (grid[i][j] == 2) seen = false;
                else if (seen) grid[i][j] = 3;
            }
        }

        int unguarded = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) unguarded++;
            }
        }

        return unguarded;
    }
};
