class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder sb = new StringBuilder(s.toLowerCase());
        int d=0;
        while(d<sb.length()){
            char ch=sb.charAt(d);
            if(Character.isLetterOrDigit(ch)){
                d+=1;
            }else{
                sb.deleteCharAt(d);
            }
        }
        int n=sb.length();
        for(int i=0;i<n/2;++i){
            int j=n-i-1;
            if(sb.charAt(i)!= sb.charAt(j)){
                return false;
            }
        }
        return true;
    }
}