class Solution {
public:
    int totalMoney(int n) {
        int monday = 1;
        int day = 0;
        int sum = 0;

        for (int i = 1; i <= n; ++i) {
            sum += monday + day;
            day++;
            if (day == 7) { // reset every week
                monday++;
                day = 0;
            }
        }
        return sum;
    }
};
