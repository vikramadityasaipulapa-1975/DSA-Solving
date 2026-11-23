class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int ct=0;
        if(nums.size()==1) return 1;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                if(nums[i]>=nums[i+1]) ct++;
            }
            else if(i==nums.size()-1){
                if(nums[i]>=nums[nums.size()-2]) ct++;
            }
            else{
                if(nums[i]>=(nums[i+1]+nums[i-1])/2.0) ct++;
            }
            
        }
        return ct;
    }
};