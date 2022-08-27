class Solution {
public:
    bool isPowerOfTwo(int n) {
           int answer=0;
       for(int i=0;i<=30;i++) {
            answer= pow(2,i);
           if(n==answer) {
           return true;
       }
           
       }
       
       return false;
    }
};