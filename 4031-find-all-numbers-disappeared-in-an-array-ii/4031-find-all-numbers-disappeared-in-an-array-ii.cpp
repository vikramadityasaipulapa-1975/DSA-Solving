class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> res;
        vector<int> a;
        unordered_set<int> numsset(nums.begin(),nums.end());
        for(int i=lower;i<=upper;i++){
            int temp;
            if(numsset.find(i)==numsset.end()){
                if(!a.empty()){
                    temp=i;
                }
                else{
                    a.push_back(i);
                    temp=i;
                }
            }
            else{
                if(!a.empty()){
                    a.push_back(i-1);
                    res.push_back(a);
                    a.clear();
                }
            }
        }
        if(!a.empty()){
            a.push_back(upper);
            res.push_back(a);
        }
        return res;
    }
};