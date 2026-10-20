class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int ct=0;
        stack<int> st;
        for(int i:nums){
            if(!st.empty()){
                if(i==st.top()){
                    ct++;
                }
                else{
                    st.push(i);
                }
            }
            else{
                st.push(i);
            }
        }
        return ct;
    }
};