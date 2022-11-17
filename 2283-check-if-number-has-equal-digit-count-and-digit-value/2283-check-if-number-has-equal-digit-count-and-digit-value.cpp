class Solution {
public:
    bool digitCount(string num) {
         unordered_map<int, int>m;
        for(char i : num){
            m[i-'0']++;
        }
        for(int i=0; i<m.size(); i++){
            if(m[i] != num[i]-'0'){
                return false;
            }
        }
        return true;
    }
};