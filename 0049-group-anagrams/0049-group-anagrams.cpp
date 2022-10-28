class Solution {
public:
     vector<vector<string>> groupAnagrams(vector<string>& strs) {
      int n = strs.size();
        map<string , vector<int>>mp;
        vector<vector<string>>ans;
        
        for (int i = 0 ; i <n ;i++)
        {
            string tmp = strs[i];
            sort(tmp.begin(),tmp.end());
            mp[tmp].push_back(i);
        }
        for (auto it : mp)
        {
            vector<string>now;
            int m = mp[it.first].size();
            for (int i = 0 ; i < m ; i++)
                now.push_back(strs[mp[it.first][i]]);    
                 ans.push_back(now);
        }
      return ans;
    }
};