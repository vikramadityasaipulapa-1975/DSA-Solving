class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int ct=0;
        for(int i=0;i<nums.size();i++){
            int a=nums[i],m=nums[i];
            for(int j=i;j<nums.size();j++){
                if(j!=i){
                    a&=nums[j];
                    m=min(m,nums[j]);
                    if(a==m) ct++;
                }
                else 
                    ct++;
            }
        }
        return ct;
    }
};