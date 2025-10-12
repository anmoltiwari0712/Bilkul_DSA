class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
    vector<int> answer;
    
    unordered_map<int, int> freq;
    
    // Initialize frequency map for the first window
    for (int i = 0; i < k; ++i) {
        freq[nums[i]]++;
    }
    
    for (int i = 0; i <= n - k; ++i) {
        // Create a vector of pairs {num, count}
        vector<pair<int, int>> counts;
        for (auto &p : freq) {
            counts.push_back({p.first, p.second});
        }
        
        // Sort by frequency descending, then by value descending
        sort(counts.begin(), counts.end(), [](pair<int,int>& a, pair<int,int>& b) {
            if (a.second != b.second) return a.second > b.second;
            return a.first > b.first;
        });
        
        // Take the top x elements
        unordered_set<int> topElements;
        for (int j = 0; j < min(x, (int)counts.size()); ++j) {
            topElements.insert(counts[j].first);
        }
        
        // Calculate x-sum
        int sum = 0;
        for (auto &p : freq) {
            if (topElements.count(p.first)) {
                sum += p.first * p.second;
            }
        }
        answer.push_back(sum);
        
        // Slide the window
        if (i + k < n) {
            freq[nums[i]]--; // remove left element
            if (freq[nums[i]] == 0) freq.erase(nums[i]);
            freq[nums[i + k]]++; // add right element
        }
    }
    
    return answer;
    }
};