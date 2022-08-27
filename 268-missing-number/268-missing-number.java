class Solution {
    public int missingNumber(int[] nums) {
        int n=nums.length;
        int sum=0;
        for(int ans: nums){
            sum+=ans;
        }
        int arrSum=(((n+1))*n)/2;
        if(arrSum==sum){
            return 0;
        }else{
            return arrSum-sum;
        }
    }
}