class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size()));
        dp[0][0]=matrix[0][0];
        for(int i=1;i<matrix[0].size();i++){
            dp[0][i]=matrix[0][i];
        }
        for(int i=1;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(j==0){
                    dp[i][j]=min(dp[i-1][j]+matrix[i][j],dp[i-1][j+1]+matrix[i][j]);
                }
                else if(j==matrix[i].size()-1){
                    dp[i][j]=min(dp[i-1][j]+matrix[i][j],dp[i-1][j-1]+matrix[i][j]);
                }
                else{
                    dp[i][j]=min(min(dp[i-1][j]+matrix[i][j],dp[i-1][j+1]+matrix[i][j]),dp[i-1][j-1]+matrix[i][j]);
                }
            }
        }
        int minlen=INT_MAX;
        for(int j=0;j<matrix[matrix.size()-1].size();j++){
            minlen=min(minlen,dp[matrix.size()-1][j]);
        }
        return minlen;
    }
};