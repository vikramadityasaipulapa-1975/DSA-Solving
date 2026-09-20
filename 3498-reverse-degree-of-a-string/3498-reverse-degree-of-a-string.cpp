class Solution {
public:
    int reverseDegree(string s) {
        int val=0,pos=1,ans=0;
        for(auto c:s){
            val='z'-c+1;
            ans+=val*pos;
            pos+=1;
        }
        return ans;
    }
};