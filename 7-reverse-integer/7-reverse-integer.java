class Solution {
    public int reverse(int x) {
        long res=0;
        int rem=0;
        int val=x;
        x=Math.abs(x);
        while(x>0){
            rem=x%10;
            res*=10;
            x/=10;
            if(res>Integer.MAX_VALUE) return 0;
            res+=(long) rem;
        }
        
        if(val<0){
            res=0-res;
        }
        
        return (int) res;
    }
}
