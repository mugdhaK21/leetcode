class Solution {
    public int[] findErrorNums(int[] arr) {
          int i=0;
        int [] ans =new int[2];
        while(i<arr.length){
            int correct= arr[i]-1;
            if(arr[i]!=arr[correct]){
                swap(arr, i, correct);
            }else{
                i++;
            }
        }
        
        for(int j=0;j<arr.length;j++){
            if(arr[j]!=j+1){
                ans[1] = j+1;
                ans[0] = arr[j];
            }
        }
        return ans;
    }
    
     void swap(int []arr, int start, int end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
}