class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> a;
        int i=0,j=0;
        priority_queue<pair<int,pair<int,int>>> pq;
        int c=0;
        for(int i=0;i<nums1.size();i++){
            pq.push({-(nums1[i]+nums2[0]),{i,0}});
        }
        j++;
        while(c<k){
            auto m=pq.top();
            a.push_back({nums1[m.second.first],nums2[m.second.second]});
            pq.pop();
            i=m.second.first;
            j=m.second.second;
            if(j+1<nums2.size()) pq.push({-(nums1[i]+nums2[j+1]),{i,j+1}});
            c++;
        }
        return a;
    }
};