class Solution {
public:
    bool canAliceWin(int n) {
        int a=0,k=10;
        while(n>=k && k>0){
            n-=k;
            if(a==0) a=1;
            else a=0;
            k--;
        }
        if(a==0) return false;
        else if(a==1) return true;
        return true; 
    }
};