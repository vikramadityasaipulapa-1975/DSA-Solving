class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int> preline(cost.size());
        preline[0]=cost[0];
        for(int i=1;i<cost.size();i++){
            preline[i]=min(preline[i-1],cost[i]);
        }
        return preline;
    }
};