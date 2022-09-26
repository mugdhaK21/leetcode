import java.util.Arrays;
class Solution {
    public int singleNumber(int[] nums) {
         Arrays.sort(nums);
    
    for(int i = 0; i < nums.length;i=i+2){
        if(i != nums.length -1 && nums[i] == nums[i+1]){
           continue;
        } else  {
            return nums[i];
        }
    }
    return nums[0];
    
    
    }
    
}