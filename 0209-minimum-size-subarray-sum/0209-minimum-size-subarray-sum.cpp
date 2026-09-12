class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res=nums.size()+1;
        int i=0,j=0;
        long sum=0;
        while(j<nums.size()){
            sum+=nums[j];
            while(i<=j && sum>=target){
                res=min(res,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return res==nums.size()+1?0:res;
    }
};