class Solution {
public:
    string digitSum(string s, int k) {
        string res=s,temp="";
        while(res.size()>k){
            temp="";
        for(int i=0;i<res.size();i+=k)
        {
            int sum=0;
            for(int j=i;j<min((int)res.size(),i+k);j++){
                sum+=res[j]-'0';
            }
            temp+=to_string(sum);
        }
        res=temp;
        }
        return res;
    }
};