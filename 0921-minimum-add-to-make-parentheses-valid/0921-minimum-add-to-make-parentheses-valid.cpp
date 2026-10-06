class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        int cc=0;
        for(auto c:s){
            if(c=='('){
                st.push(c);
            }else{
                if(!st.empty()) st.pop();
                else cc++;
            }
        }
        //cout<<cc;
        return st.size()+cc;
    }
};