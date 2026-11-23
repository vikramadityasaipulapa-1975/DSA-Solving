class Solution {
public:
    bool checkString(string s) {
        int a=0,b=0;
        for(auto c:s){
            if(c=='a'){
                if(b!=0){
                    return false;
                }
                a++;
            }else{
                b++;
            }
        }
        return true;
    }
};