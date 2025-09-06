class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ops = 0;
        for (int num : nums) {
            if (num % 3 != 0) ops++; // needs 1 operation if not divisible by 3
        }
        return ops;
    }
};