class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int ct=0;
        for(int i:arr1){
            int flag=0;
            for(int j:arr2){
                if(abs(i-j)<=d){
                    //cout<<abs(i-j)<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                ct++;
            }
        }
        return ct;
    }
};