class Solution {
public:
    bool checkSubarraySum(vector<int>& A, int k) {
        int n = A.size(), curr = 0;
        unordered_map<int, int> mp; // pos of [0, k-1]

        mp[0] = -1;
        for(int i=0; i<n; i++) {
            curr += A[i];
            if(mp.count(curr%k) && i - mp[curr%k] >= 2) return true;
            if(!mp.count(curr%k)) mp[curr%k] = i;
        }
        return false;
    }
};