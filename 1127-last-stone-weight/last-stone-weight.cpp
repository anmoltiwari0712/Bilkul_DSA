#include <vector>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            int n = stones.size();
            int flargest = -1, slargest = -1; // store indices

            // find index of first largest and second largest
            for (int i = 0; i < n; i++) {
                if (flargest == -1 || stones[i] > stones[flargest]) {
                    slargest = flargest;
                    flargest = i;
                } else if (slargest == -1 || stones[i] > stones[slargest]) {
                    slargest = i;
                }
            }

            int x = stones[flargest];
            int y = stones[slargest];

            // remove both elements safely
            stones.erase(stones.begin() + flargest);
            stones.erase(stones.begin() + (slargest > flargest ? slargest - 1 : slargest));

            // smash and push back if not equal
            if (x != y) {
                stones.push_back(x - y);
            }
        }

        return stones.empty() ? 0 : stones[0];
    }
};
