class Solution {
    public int maxSumSubmatrix(int[][] matrix, int k) {
          
        int n = matrix.length;
        int m = matrix[0].length;
        int[] sum = new int[n];
        int maxSum = Integer.MIN_VALUE;
        
        for(int i = 0; i<m; i++){
            Arrays.fill(sum,0);
            
            for(int j = i; j<m; j++){
                
                for(int r = 0; r<n; r++){
                    sum[r] += matrix[r][j];
                }
                
                int currMax = findMaxSubarraySum(sum,k);
                maxSum = Math.max(currMax, maxSum);
            }
        }
        
        return maxSum;
    }
     public int findMaxSubarraySum(int a[], int k) {
        
        int max = Integer.MIN_VALUE;
        
        for (int i = 0; i < a.length; i++) {
            int tsum = 0;
            for (int j = i; j < a.length; j++) {
                tsum += a[j];
                if (tsum <= k)
                    max = Math.max(max, tsum);
            }
        }
        return max;
    }
    
}