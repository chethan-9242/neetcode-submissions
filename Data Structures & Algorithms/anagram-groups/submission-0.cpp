class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
            string key=strs[i];
            sort(key.begin(),key.end());
            mp[key].push_back(strs[i]);
        }
        for(unordered_map<string, vector<string>>:: iterator it=mp.begin();it!=mp.end();it++)
        {
            result.push_back(it->second);
        }
        return result;
    }
};
