class Solution {
public:
    long long maxDifference(vector<int>& nums) {
        long long a=0,b,k=0;
        vector<long long> dp(nums.size()+1,0);
        for(int i=nums.size()-1;i>=0;i--){
            long long a=nums[i],b;
            if(a%3==0){
                a-=dp[i+1];
            }
            else{
                a+=dp[i+1];
            }
            b=a;
            if(i+1<nums.size()){
                b=nums[i]+nums[i+1];
                if(b%3==0){
                    b-=dp[i+2];
                }
                else{
                    b+=dp[i+2];
                }
            }
            dp[i]=max(a,b);
        }
        return dp[0];
    }
};