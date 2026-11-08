class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> points;
        for(int i=0;i<m;i++){
            if(i==0){
                string s="";
                for(int i=0;i<n;i++){
                    s+=".";
                }
                points.push_back(s);
            }else{
                string s="";
                for(int i=0;i<n-1;i++){
                    s+="#";
                }
                s+=".";
                points.push_back(s);
            }
            
        }
        return points;
    }
};