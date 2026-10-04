class Solution {
public:
int dist(vector<vector<int>>& dp,vector<vector<int>>& obstacleGrid){
        if(obstacleGrid[0][0]==1) return 0;
        dp[0][0]=1;
        for(int i=0;i<obstacleGrid.size();i++){
            if(obstacleGrid[i][0]!=1) dp[i][0]=1;
            else{ dp[i][0]=0;break;}
        }
        for(int i=0;i<obstacleGrid[0].size();i++){
            if(obstacleGrid[0][i]!=1) dp[0][i]=1;
            else {dp[0][i]=0;break;}
        }
        for(int i=1;i<obstacleGrid.size();i++){
            for(int j=1;j<obstacleGrid[i].size();j++){
                if(obstacleGrid[i][j]!=1)
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                else dp[i][j]=0;
            }
        }
        return dp[obstacleGrid.size()-1][obstacleGrid[0].size()-1];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),0));
        return dist(dp,obstacleGrid);
    }
};