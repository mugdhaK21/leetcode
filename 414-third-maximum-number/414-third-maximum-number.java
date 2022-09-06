class Solution {
    public int thirdMax(int[] nums) {
      
         Arrays.sort(nums);
        int n = nums.length;
        if(n < 3){
            return nums[n-1];
        }
        int k = 1;
        while(k < 3 && n>1){
            n--;
            if(nums[n] != nums[n-1]){
                k++;
            }   
        }
        if(k<3){
            return nums[nums.length-1];
        }
        return nums[n-1];
    }
}