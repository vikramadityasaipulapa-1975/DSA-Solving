class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        vector<vector<vector<bool>>> dp(grid.size(),vector<vector<bool>>(grid[0].size(),vector<bool>(1024,false)));
        dp[0][0][grid[0][0]]=true;;
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                for(int k=0;k<1024;k++){
                    if(i>0 && dp[i-1][j][k]){
                        dp[i][j][k^grid[i][j]]=true;
                    }
                    if(j>0 && dp[i][j-1][k]){
                        dp[i][j][k^grid[i][j]]=true;
                    }
                }
            }
        }
        for(int x=0;x<1024;x++){
            if(dp[grid.size()-1][grid[0].size()-1][x]){
                return x;
            }
        }
        return -1;
    }
};