class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> res;
        long long p = 1;
        while(n > 0) {
            int d = n % 10;
            if (d != 0) {
                res.push_back(d * p);
            }
            p *= 10;
            n /= 10;
        }
        sort(res.begin(), res.end(), greater<int>());
        return res;
    }
};