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
        vector<int> dp1(nums.size(),-1),dp2(nums.size(),-1),temp1,temp2;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=nums.size()-1) temp1.push_back(nums[i]);
            if(i!=0) temp2.push_back(nums[i]);
        }
        return max(addloot(temp1.size()-1,temp1,dp1),addloot(temp2.size()-1,temp2,dp2));
    }
};