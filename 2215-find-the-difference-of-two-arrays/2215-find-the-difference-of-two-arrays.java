class Solution {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        Set<Integer> s1 = new HashSet<Integer>();
        Set<Integer> s2 = new HashSet<Integer>();
        ArrayList<Integer> l1 = new ArrayList<>();
        ArrayList<Integer> l2 = new ArrayList<>();
        for(int i: nums1){
            s1.add(i);
        }
        for(int j: nums2){
            s2.add(j);
        }
        
        for(int i:nums1) {
            if(!s2.contains(i) && l1.indexOf(i)==-1){
                l1.add(i);
            }
        }
    
         for(int i:nums2) {
                  if(!s1.contains(i) && l2.indexOf(i)==-1){
                       l2.add(i);
                  }      
         }
        
        List<List<Integer>> list = new ArrayList<List<Integer>>();
            
        list.add(l1);
        list.add(l2);
        return list;
    }
}