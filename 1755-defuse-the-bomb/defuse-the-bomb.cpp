#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);
        
        if (k == 0) return res; // all zeros
        
        vector<int> extended(2 * n);
        for (int i = 0; i < 2 * n; ++i) {
            extended[i] = code[i % n];
        }

        int window = abs(k);
        int sum = 0;

        if (k > 0) {
            // Initialize the first window: next k elements after index 0
            for (int i = 1; i <= k; ++i) {
                sum += extended[i];
            }
            res[0] = sum;

            // Slide the window for the rest
            for (int i = 1; i < n; ++i) {
                sum -= extended[i];           // remove element leaving the window
                sum += extended[i + k];       // add element entering the window
                res[i] = sum;
            }
        } 
        else { // k < 0
            // Initialize the first window: previous |k| elements before index 0
            for (int i = n + k; i < n; ++i) {
                sum += extended[i];
            }
            res[0] = sum;

            // Slide the window
            for (int i = 1; i < n; ++i) {
                sum -= extended[n + k - 1 + i];  // element leaving
                sum += extended[n - 1 + i];      // element entering
                res[i] = sum;
            }
        }

        return res;
    }
};
