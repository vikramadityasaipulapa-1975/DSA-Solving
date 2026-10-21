class Solution {
public:
    int maxrect(vector<int>& l){
    int ans=0;
    stack<int> st;
    for(int i=0;i<=l.size();i++){
        int curr=(i==l.size()?0:l[i]);
        while(!st.empty() && l[st.top()]>curr){
            int len=l[st.top()];
            st.pop();
            int w;
            if(st.empty()){
                w=i;
            }
            else{
                w=i-st.top()-1;
            }
            ans=max(ans,len*w);
        }
        if(i<l.size()){
            st.push(i);
        }
    }
    return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
         vector<int> l(matrix[0].size(),0);
        int ans=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]=='1'){
                    l[j]+=1;
                }else{
                    l[j]=0;
                }
            }
            ans=max(ans,maxrect(l));
        }
        return ans;
    
    }
};