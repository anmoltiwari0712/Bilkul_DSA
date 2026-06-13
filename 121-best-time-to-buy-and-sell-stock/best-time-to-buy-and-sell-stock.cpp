class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minsum=INT_MAX;
        int maxsum=0;

        for(int i=0;i<n;i++){
            minsum=min(minsum,prices[i]);
            maxsum=max(maxsum,prices[i]-minsum);
        }

        return maxsum;
    }
};