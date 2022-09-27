class Solution {
    public int[] productExceptSelf(int[] nums) {
        int [] left = new int[nums.length];
        int []right = new int[nums.length];
        int []arr= new int[nums.length];
        int leftNum=1;
            
        for(int i=0;i<nums.length;i++){
            left[i] = leftNum;
            leftNum *= nums[i];
            
        }
        int rightNum =1;
        for(int i=nums.length-1;i>=0;i--){
            right[i] = rightNum;
            rightNum *= nums[i];
        }
        
        for(int i=0;i<nums.length;i++){
            arr[i] = left[i] * right[i];
            
        }
       
        return arr;
    }
}