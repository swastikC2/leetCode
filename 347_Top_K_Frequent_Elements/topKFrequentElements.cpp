class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(auto n : nums){
            mpp[n]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it : mpp){
            pq.push({it.second,it.first});
        }
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};