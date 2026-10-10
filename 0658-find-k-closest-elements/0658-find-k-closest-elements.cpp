class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> a(k);
        priority_queue<pair<int,int>> pq;
        for(int i:arr){
            pq.push({-(abs(x-i)),-i});
        }
        int c=0;
        while(c<k){
            int x=-pq.top().second;
            a[c]=x;
            c++;
            pq.pop();
        }
        sort(a.begin(),a.end());
        return a;
    }
};