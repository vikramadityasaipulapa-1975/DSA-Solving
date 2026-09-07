class Solution {
public:
    int minimumFlips(int n) {
        string s="";
        while(n>0){
            s+=to_string(n&1);
            n=n>>1;
        }
        int i=0,j=s.size()-1,ct=0;
        cout<<s;
        while(i<s.size() && j>=0){
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                ct++;
                i++;
                j--;
            }
        }
        return ct;
    }
};