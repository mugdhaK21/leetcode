class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
       String ans1="", ans2="";
        for(int i=0; i<word1.length; i++){
            ans1=ans1+word1[i];
        }
        for(int i=0; i<word2.length; i++){
            ans2=ans2+word2[i];
        }
        if(ans1.equals(ans2)) return true;
        return false;
    } 
    
}