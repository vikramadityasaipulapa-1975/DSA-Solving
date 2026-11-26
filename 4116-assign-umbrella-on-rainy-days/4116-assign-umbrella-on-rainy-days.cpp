class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int a=0,b=0,f1=0,f2=0;
        vector<string> ans;
        for(int i=0;i<rain.size()-1;i++){
            f1=0,f2=0;
            if(rain[i]==1){
                f2=1;
                f1=0;
                if(rain[i+1]==1){
                    f1=1;
                }
                if(f1==1){
                    if(a<=b){
                        ans.push_back("Alice");
                        a++;
                    }
                    else{
                        b++;
                        ans.push_back("Bob");
                    }
                }else{
                    ans.push_back("Bob");
                    b++;
                }
            }
            else{
                ans.push_back("None");
            }
        }
        if(rain[rain.size()-1]==1){
            ans.push_back("Bob");
        }
        else{
            ans.push_back("None");
        }
        return ans;
    }
};