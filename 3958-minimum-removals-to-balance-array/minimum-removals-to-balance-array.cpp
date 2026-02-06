class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int best = 1; // at least 1 element is always balanced
        int l = 0;

        for (int r = 0; r < n; r++) {
            // Move left pointer until condition is satisfied
            while (l <= r && (long long)nums[r] > (long long)nums[l] * k) {
                l++;
            }
            best = max(best, r - l + 1);
        }

        return n - best;
    }
};
