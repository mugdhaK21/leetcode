class Solution {
    public int[] shuffle(int[] nums, int n) {
        int [] shuffle = new int[nums.length];
        int j=0;
        for(int i=0;i<n;i++){
            shuffle[j++]=nums[i];
            shuffle[j++]= nums[i+n];   
        }
        return shuffle;
    }
}