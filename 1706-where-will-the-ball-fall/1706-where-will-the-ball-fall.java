class Solution {
    public int[] findBall(int[][] grid) {
          int m = grid.length;
        int n = grid[0].length;
        
        int[] ans = new int[n];
        
        for (int i = 0; i < n; i++) {
            int r = 0, c = i;
            
            while (r < m) {
                int currentCell = grid[r][c];
                c += currentCell;
                
                if (c < 0 || c >= n || grid[r][c] != currentCell) {
                    c = -1;
                    break;
                }
                
                r++;
            }
            
            ans[i] = c;
        }
        
        return ans;
    
    }
}