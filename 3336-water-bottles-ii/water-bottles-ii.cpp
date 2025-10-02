class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int drunk = 0;
        int full = numBottles;
        int empty = 0;
        int cost = numExchange;

        while (full > 0) {
            
            drunk += full;
            empty += full;
            full = 0;

          
            if (empty >= cost) {
                empty -= cost;
                full += 1;    
                cost++;       
            }
        }
        return drunk;
    }
};
