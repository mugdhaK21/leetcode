class Solution {
    public boolean isAnagram(String s, String t) {
            
        if (s.length() != t.length()) {  
            return false;  
        } else {  
            char[] ArrayS = s.toLowerCase().toCharArray();  
            char[] ArrayT = t.toLowerCase().toCharArray();  
            Arrays.sort(ArrayS);  
            Arrays.sort(ArrayT);  
            if(Arrays.equals(ArrayS, ArrayT)){
              return true;   
            }  
        }  
       return false;

    }
}