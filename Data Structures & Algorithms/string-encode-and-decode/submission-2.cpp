class Solution {
public:

    string encode(vector<string>& strs) {
        int n=strs.size();
        string ans="";
        for(int i=0;i<n;i++)
        {
            ans+=to_string(strs[i].size())+"#"+strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            j++;
            ans.push_back(s.substr(j,len));
            i=j+len;
        }
        return ans;
    }
};
