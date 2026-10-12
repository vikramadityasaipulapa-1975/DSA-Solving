class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        vector<int> a;
        long ma=INT_MIN,s=-1,l=-1;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]+nums[j]==target && nums[i]>nums[j]){
                    if(nums[i]*nums[j]>ma){
                        s=i;
                        l=j;
                        ma=nums[i]*nums[j];
                    }
                }
            }
        }
        a.push_back(s);
        a.push_back(l);
        return a;

    }
};