import java.util.Arrays;
class Solution {
    public int findKthLargest(int[] nums, int k) {
        Arrays.sort(nums);
        int ans= nums[nums.length-k];
        return ans;
    }
}