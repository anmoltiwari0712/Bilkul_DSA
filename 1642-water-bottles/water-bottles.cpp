class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int remaining;
        while(numBottles>=numExchange){
            ans = ans + (numBottles / numExchange);
            remaining=numBottles % numExchange;
            numBottles=remaining + (numBottles/numExchange);
            // numBottles++;
        }
        return ans;
    }
};