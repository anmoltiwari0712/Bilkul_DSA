class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprof=0;
        int minpri=INT_MAX;
        for(int i=0;i<n;i++){
            minpri=min(minpri,prices[i]);
            maxprof=max(maxprof,prices[i]-minpri);
            
        }
        return maxprof;
    }
};