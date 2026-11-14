class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int subarr=-1,sum=0,m=INT_MAX;
        int i=0;
        for(i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size() && j<i+r;j++){
                sum+=nums[j];
                if(j-i+1>=l && sum>0){
                    m=min(m,sum);
                }
            }
        }
        if(m==INT_MAX) return -1;
        return m;
    }
};