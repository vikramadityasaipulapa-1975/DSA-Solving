class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> a(100001,0);
        for(int i:nums){
            a[i+10000]++;
        }
        for(int i=100000;i>=0;i--){
            k-=a[i];
            if(k<=0) return i-10000;
        }
        return 0;
    }
};