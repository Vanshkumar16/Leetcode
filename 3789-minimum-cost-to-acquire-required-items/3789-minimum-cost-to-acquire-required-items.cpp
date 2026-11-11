class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1,int need2) {
        long long total = 0;
        int r = min(need1, need2);

        if (costBoth >= cost1 + cost2) {
            total = 1ll*need1 * cost1 +1ll* need2 * cost2;
        } else {
            total =1ll* r * costBoth;
            need1 -= r;
            need2 -= r;
            if (need1 > 0) {
                total += 1ll*need1 * min(cost1, costBoth);
            } else if (need2 > 0) {
                total +=1ll* need2 * min(cost2, costBoth);
            }
        }
        return total;
    }
};