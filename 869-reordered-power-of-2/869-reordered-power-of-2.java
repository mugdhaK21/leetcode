class Solution {
    public boolean reorderedPowerOf2(int n) {
        int count[] = count(n);
        int power = 1;
        for (int i = 0; i < 31; i++) {
            int[] PowerCount = count(power);
            if (Equal(count, PowerCount)) {
                return true;
            }
            power *= 2;
        }
        return false;
    }
    
    private int[] count(int n){
        int [] c = new int[10];
        while(n!=0){
            c[n%10]++;
            n /=10;
        }
        return c;
    }
    
    private boolean Equal(int[] a1,int[] a2){
        for (int i = 0; i < a2.length; i++) {
            if (a1[i] != a2[i]) {
                return false;
            }
        }
        return true;
    }
}