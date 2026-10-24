class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> a={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> dayCount(12);
        int ct=0;
        for(int i=0;i<12;i++){
            ct+=a[i];
            dayCount[i]=ct;
        }
        int acs,acr,bos,bor;
        if(arriveAlice[0]=='0'&& arriveAlice[1]=='1'){
            acs=(arriveAlice[3]-'0')*10+(arriveAlice[4]-'0');
        }
        else{
        acs=dayCount[((arriveAlice[0]-'0')*10+arriveAlice[1]-'0')-2]+(arriveAlice[3]-'0')*10+(arriveAlice[4]-'0');
        }
        if(leaveAlice[0]=='0'&& leaveAlice[1]=='1'){
            acr=(leaveAlice[3]-'0')*10+(leaveAlice[4]-'0');
        }
        else{
        acr=dayCount[((leaveAlice[0]-'0')*10+leaveAlice[1]-'0')-2]+(leaveAlice[3]-'0')*10+(leaveAlice[4]-'0');
        }
        if(arriveBob[0]=='0'&& arriveBob[1]=='1'){
            bos=(arriveBob[3]-'0')*10+(arriveBob[4]-'0');
        }
        else{
        bos=dayCount[((arriveBob[0]-'0')*10+arriveBob[1]-'0')-2]+(arriveBob[3]-'0')*10+(arriveBob[4]-'0');
        }
        if(leaveBob[0]=='0'&& leaveBob[1]=='1'){
            bor=(leaveBob[3]-'0')*10+(leaveBob[4]-'0');
        }
        else{
        bor=dayCount[((leaveBob[0]-'0')*10+leaveBob[1]-'0')-2]+(leaveBob[3]-'0')*10+(leaveBob[4]-'0');
        }
        int c=0;
        for(int i=acs;i<=acr;i++){
            if(i>=bos && i<=bor){
                c++;
            }
        }
        return c;
    }
};