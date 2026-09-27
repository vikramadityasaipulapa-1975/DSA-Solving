class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st;
        string res="",temp="";
        for(auto c:s){
            if(c!=')'){
                st.push(c);
            }else{

                while(st.top()!='('){
                    temp+=st.top();
                    st.pop();
                }
                //cout<<temp<<endl;
                st.pop();
                //if(st.empty()) return res;
                //else{
                    for(auto i:temp){
                        st.push(i);
                    }
                    temp="";
                //}
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};