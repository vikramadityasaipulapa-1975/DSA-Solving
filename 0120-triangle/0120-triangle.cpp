class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(triangle.size(),vector<int>(triangle.size()));
        dp[0][0]=triangle[0][0];
        for(int i=1;i<triangle.size();i++){
            for(int j=0;j<triangle[i].size();j++){
                if(j==0)
                dp[i][j]=triangle[i][j]+dp[i-1][j];
                else if(j==i)
                dp[i][j]=triangle[i][j]+dp[i-1][j-1];
                else
                dp[i][j]=min(triangle[i][j]+dp[i-1][j],triangle[i][j]+dp[i-1][j-1]);
            }
        }
        int mi=INT_MAX;
        for(int i=0;i<triangle[triangle.size()-1].size();i++){
            mi=min(mi,dp[triangle.size()-1][i]);
        }
        return mi;
    }
};