class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int even=1,odd=0;
        long sum=0,mod=1e9+7,ct=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum%2==0){
                ct+=odd%mod;
                even++;
            }else{
                ct+=even%mod;
                odd++;
            }
        }
        return ct%mod;
    }
};