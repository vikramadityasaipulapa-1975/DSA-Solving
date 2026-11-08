class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string,int> freq;
        for(auto i:responses){
            unordered_map<string,int> ct;
            for(auto j:i){
                ct[j]+=1;
            }
            for(auto k:ct){
                freq[k.first]++;
            }
        }
        int m=0;
        string s="";
        for(auto n:freq){
            //cout<<s<<" ";
            if(n.second>m){
                m=n.second;
                s=n.first;
            }
            else if(n.second==m){
                if(n.first<s){
                    s=n.first;
                }
            }
        }
        return s;
    }
};