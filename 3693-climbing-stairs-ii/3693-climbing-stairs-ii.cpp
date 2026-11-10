class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n+1,INT_MAX);
        if(n==1) return costs[0]+1;
        dp[0]=0;
        dp[1]=costs[0]+1;
        for(int i=2;i<=n;i++){
            if(i>2){
                dp[i]=min(dp[i-3]+costs[i-1]+9,dp[i-2]+costs[i-1]+4);
                dp[i]=min(dp[i],dp[i-1]+costs[i-1]+1);
            }
            else{
                dp[i]=min(dp[i-2]+costs[i-1] + 4,dp[i-1]+costs[i-1]+1);
            }
        }
        return dp[n];
    }
};