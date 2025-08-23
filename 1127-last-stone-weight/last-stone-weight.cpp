class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
        // find two largest
        int flargest = *max_element(stones.begin(), stones.end());
        stones.erase(find(stones.begin(), stones.end(), flargest));

        int slargest = *max_element(stones.begin(), stones.end());
        stones.erase(find(stones.begin(), stones.end(), slargest));

        // smash
        if (flargest != slargest) {
            stones.push_back(flargest - slargest);
        }
    }
    return stones.empty() ? 0 : stones[0];
    }
};