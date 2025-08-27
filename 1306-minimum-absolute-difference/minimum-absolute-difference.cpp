class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mindiff=INT_MAX;
        int n=arr.size();
        vector<vector<int>> ans;
        for(int i=1;i<n;i++){
            mindiff=min(mindiff,arr[i]-arr[i-1]);
        }
        for (int i = 1; i < n; ++i) {
            if (arr[i] - arr[i - 1] == mindiff) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }
        return ans;
    }
};