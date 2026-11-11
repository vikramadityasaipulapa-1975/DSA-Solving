class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int rounds=minutesToTest/minutesToDie;
        int states=rounds+1;
        if(buckets==1) return 0;
        for(int pis=1;pis<1000;pis++){
            if(pow(states,pis)>=buckets){
                return pis;
            }
        }
        return 0;
    }
};