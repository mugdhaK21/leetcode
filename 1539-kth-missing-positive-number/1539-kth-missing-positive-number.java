class Solution {
    public int findKthPositive(int[] arr, int k) {
        int i=0;
        int j=1;
        while (true){
            if(i<arr.length && arr[i]==j){
                i++;
            }else{
                k--;
            }
            if(k==0){
                break;
            }
            j++;
        }
        
        return j;
    }
}