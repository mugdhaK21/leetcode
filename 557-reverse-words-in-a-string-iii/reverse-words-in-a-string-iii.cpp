class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' || i==s.length()-1){
                int end=0;
                if(i==s.length()-1 && s[i]!=' '){
                end=i+1;
                }else{
                    end=i;
                }

                while(start<end){
                    swap(s[start], s[end-1]);
                    start++;
                    end--;
                }

                start = i+1;
            }
        }
        return s;
    }
};