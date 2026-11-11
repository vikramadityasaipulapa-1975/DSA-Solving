class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ct=0;
        int common=min(need1,need2);
        ct+=1LL*common*min(costBoth,cost1+cost2);
        need1-=common;
        need2-=common;
        ct+=1LL*need1*min(cost1,costBoth);
        ct+=1LL*need2*min(costBoth,cost2);
        return ct;
    }
};