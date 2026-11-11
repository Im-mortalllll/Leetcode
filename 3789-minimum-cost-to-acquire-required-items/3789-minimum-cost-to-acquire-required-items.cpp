class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long first = min(need1, need2);
        return min(1LL * need1 * cost1 + 1LL * need2 * cost2, 
            min(1LL * first*costBoth + 1LL * (need1 - first) * cost1 + 1LL * (need2 - first) * cost2, 
            1LL * max(need1, need2) * costBoth));
    }
};