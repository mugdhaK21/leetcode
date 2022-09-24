class Solution {
    public int arrangeCoins(int n) {
        long start=1;
        long end=n;
        while(start<=end){
            long mid= start +(end-start)/2;
            long filledCoins = mid *(mid+1)/2;
            if(filledCoins==n) return (int)mid;
            if(filledCoins>n) {
                end = mid-1;
            }
            if(filledCoins <n){
                start = mid+1;
            }
        }
        
        return (int)end;
    }
}