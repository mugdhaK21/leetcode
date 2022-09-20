class Solution {
public:
    void reverseString(vector<char>& s) {
        int end=s.size()-1;
        char temp;
        for(int i=0;i<s.size()/2;i++){
            temp=s[end];
            s[end]=s[i];
            s[i]=temp;
            end--;
        }
    }
};