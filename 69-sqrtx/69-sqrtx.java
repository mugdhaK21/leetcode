class Solution {
    public int mySqrt(int x) {
        int oddNum=1;
        int c=0;
        while(x>0 && oddNum<=x){
            x-=oddNum;
            oddNum+=2;
            c++;
        }
        return c;
    }
}