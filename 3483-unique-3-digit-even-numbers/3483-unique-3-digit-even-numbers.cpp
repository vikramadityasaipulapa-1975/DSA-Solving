class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> sti;
        int a,b,c;
        for(int i=0;i<digits.size();i++){
            if(digits[i]==0) continue;
            int num=digits[i]*100;
            for(int j=0;j<digits.size();j++){
                if(j==i) continue;
                num+=digits[j]*10;
                for(int k=0;k<digits.size();k++){
                    if(k==j || k==i) continue;
                    if(digits[k]%2!=0) continue; 
                    num+=digits[k];
                    sti.insert(num);
                    num-=digits[k];
                }
                num-=digits[j]*10;
            } 
            
        }
        return sti.size();
    }
};