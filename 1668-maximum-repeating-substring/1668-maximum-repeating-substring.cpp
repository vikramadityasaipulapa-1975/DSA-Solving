class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int i=0,j=0;
        int ct=0,m=0;
        string temp=word;
        while(sequence.find(temp)!=string::npos){
            m++;
            temp+=word;
        }
        return m;
    }
};