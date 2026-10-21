class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();

        vector<int> ans;

        map<int,int> mpp;

        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        vector<pair<int,int>> freq; // Stores <freq, ele>

        for(auto& it:mpp){
            freq.push_back({it.second,it.first});
        }

        sort(freq.begin(),freq.end(),greater<pair<int,int>>());

        for(int i=0;i<k;i++){
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};