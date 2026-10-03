class Solution {
public:
    int addloot(int idx,vector<int>& nums,vector<int>& dp){
        if(idx==0) return nums[idx];
        if(idx<0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int take=nums[idx]+addloot(idx-2,nums,dp);
        int nottake=0+addloot(idx-1,nums,dp);
        return dp[idx]=max(take,nottake);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return addloot(nums.size()-1,nums,dp);
    }
};