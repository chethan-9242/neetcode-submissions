class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        vector<int> result;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(unordered_map<int,int>:: iterator it=mp.begin();it!=mp.end();it++)
        {
            pq.push({it->second,it->first});
        }
        while(k>0)
        {
            result.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return result;
    }
};