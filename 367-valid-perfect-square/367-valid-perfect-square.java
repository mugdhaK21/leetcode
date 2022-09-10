class Solution {
    public boolean isPerfectSquare(int num) {
        int start=1;
        int end=num/2;
          if(num==1 || num==0) {
              return true;
          }
        while(start<=end){
            long mid=start +(end-start)/2;
          
            
            if(mid*mid==num){
                return true;
            }else if(mid*mid > num){
                end=(int)mid-1;                
            }else{
                start=(int)mid+1;
            }
                     
            }
        return false;
                     }
}