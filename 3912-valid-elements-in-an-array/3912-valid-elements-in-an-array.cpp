class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int pre[nums.size()],suf[nums.size()];
        pre[0]=nums[0];
        suf[nums.size()-1]=nums[nums.size()-1];
        vector<int> v;
        if(nums.size()<=2) return nums;
        for(int i=1;i<nums.size();i++){
            pre[i]=max(pre[i-1],nums[i]);
        }
        for(int i=nums.size()-2;i>=0;i--){
            suf[i]=max(suf[i+1],nums[i]);
        }
        v.push_back(nums[0]);
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>pre[i-1] || nums[i]>suf[i+1]){
                v.push_back(nums[i]);
            }
        }
        v.push_back(nums[nums.size()-1]);
        return v;
    }
};