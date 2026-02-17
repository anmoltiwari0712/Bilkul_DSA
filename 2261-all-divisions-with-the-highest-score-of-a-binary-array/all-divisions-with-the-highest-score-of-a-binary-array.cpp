
class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n = nums.size();
        
        int onesright = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) onesright++;
        }
        
        int zeroesleft = 0;
        int maxScore = -1;
        vector<int> result;
        
        for (int i = 0; i <= n; i++) {
            int score = zeroesleft + onesright;
            
            if (score > maxScore) {
                maxScore = score;
                result.clear();
                result.push_back(i);
            } else if (score == maxScore) {
                result.push_back(i);
            }
            
            if (i < n) {
                if (nums[i] == 0) zeroesleft++;
                else onesright--;
            }
        }
        
        return result;
    }
};
