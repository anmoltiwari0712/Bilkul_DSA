class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7;      // full weeks
        int days = n % 7;       // remaining days after full weeks
        int total = 0;
        
        // Sum for complete weeks
        // Each week starts with (1 + week_index)
        // Sum of one week = 7 * start + (0 + 1 + ... + 6) = 7*start + 21
        // Use arithmetic series formula for all full weeks
        total += 7 * weeks * (weeks + 1) / 2; // base money for starting days of each week
        total += 21 * weeks;                  // (0+1+2+3+4+5+6)*weeks = 21*weeks
        
        // Remaining days in the last (incomplete) week
        int start = weeks + 1; // starting amount for this partial week
        for (int i = 0; i < days; ++i)
            total += start + i;
        
        return total;
    }
};

