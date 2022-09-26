import java.util.Arrays;
class Solution {
    public int singleNumber(int[] nums) {
         Arrays.sort(nums);
    
    for(int i = 0; i < nums.length;){
        if(i != nums.length -1 && nums[i] == nums[i+1]){
            i = i + 2;
        } else  {
            return nums[i];
        }
    }
    return nums[0];
    
    
    }
    
}