class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int ct=0;
        int sum=0,i=0,l;
        vector<int> res(2);
        for(auto a:s){
            if(sum+widths[a-'a']>100){
                ct++;
                sum=widths[a-'a'];
            }
            else{
                sum=sum+widths[a-'a'];
            }
        }
        res[0]=ct+1;
        res[1]=sum;
        return res;
    }
};