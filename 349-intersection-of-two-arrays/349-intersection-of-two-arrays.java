class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> result = new HashSet<Integer>();
        for(int i : nums1){
            for(int j:nums2){
                if(i==j){
                    result.add(j);
                }
            }
        }
        
        int []arr= new int[result.size()];
        int k=0;
        for(int element : result){
            arr[k++]=element;
        }
        
        return arr;
    }
}