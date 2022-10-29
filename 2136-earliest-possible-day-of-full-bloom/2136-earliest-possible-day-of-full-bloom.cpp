class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>> vp;
        int ans = 0;
        for(int i = 0; i < plantTime.size(); i++) {
            vp.push_back({growTime[i], plantTime[i]});
        }
        sort(vp.rbegin(), vp.rend());
        int curr = 0;
        for(auto plant:vp) {
            curr += plant.second;
            ans = max(ans, curr+plant.first);
        }
        return ans;
    }
};