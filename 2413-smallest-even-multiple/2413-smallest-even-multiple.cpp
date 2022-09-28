class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2!=0) return 2*n;
        if(n==0) return 0;
        
        return n;
        
    }
};