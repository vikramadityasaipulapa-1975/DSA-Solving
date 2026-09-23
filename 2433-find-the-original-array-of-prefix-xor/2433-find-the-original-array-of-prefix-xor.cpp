class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int x=0;
        vector<int> a(pref.size());
        a[0]=pref[0];
        for(int i=1;i<pref.size();i++){
            x^=pref[i];
            a[i]=pref[i-1]^pref[i];
        }
        return a;
    }
};