class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> ct1,ct2;
        for(auto c:s){
            ct1[c]++;
        }
        for(auto c:t){
            ct2[c]++;
        }
        for(auto c:t){
            if(ct1[c]!=ct2[c]){
                return c;
            }
        }
        return 'a';
    }
};