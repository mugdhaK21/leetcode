class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
       int[] arr=new int[26];
        for(int i:magazine.toCharArray()){
            arr[i-'a']++;
        }
        for(int i:ransomNote.toCharArray()){
            if(arr[i-'a']==0){
                return false;
            }else{
                arr[i-'a']--;
            }
        }
        
        return true;
    }
}
