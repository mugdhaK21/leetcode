class Solution {
    public int removeElement(int[] nums, int val) {
         int count=0;
        int j=0;
        while(j<nums.length){
            if(nums[j]!=val){
                nums[count]=nums[j];
                count++;
            }
            j++;
        }
        return count ;
    }
}