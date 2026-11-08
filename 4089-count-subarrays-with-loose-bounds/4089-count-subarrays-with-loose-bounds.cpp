class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ct=0,sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=minK && nums[i]<=maxK){
                ct++;
            }else{
                sum+=(ct*(ct+1))/2;
                ct=0;
            }
        }
        sum+=(ct*(ct+1))/2;
        return sum;
    }
};