class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ch = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int n = columnNumber;
        string ans ="";
        while(n>0){
            n= n-1;
            int k=n%26;
            ans.push_back(ch[k]);
            n=n/26;
            
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};