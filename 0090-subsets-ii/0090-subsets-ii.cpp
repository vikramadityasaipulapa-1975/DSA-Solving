class Solution {
public:
    void subsets(vector<int>& nums,int idx,vector<int>& temp,vector<vector<int>>& ans){
        if(idx==nums.size()){
            ans.push_back({temp});
            return;
        }
        //include(take)
        temp.push_back(nums[idx]);
        idx=idx+1;
        subsets(nums,idx,temp,ans);
        temp.pop_back();
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }
        subsets(nums,idx,temp,ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        vector<vector<int>> ans;
        subsets(nums,0,temp,ans);
        return ans;
    }
};