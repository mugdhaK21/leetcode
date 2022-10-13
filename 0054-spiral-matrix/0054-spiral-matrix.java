class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> list = new ArrayList<Integer>();
        
        int l=0,r= matrix[0].length;
        int up=0,down=matrix.length;
        while(l<r && up<down){
            for(int i=l;i<r;i++){
                list.add(matrix[up][i]);
            }
            up=up+1;
             for(int i=up;i<down;i++){
                list.add(matrix[i][r-1]);
            }
            r=r-1;
            
            if(!(l<r && up<down)){
                break;
            }
            for(int i=r-1;i>l;i--){
                 list.add(matrix[down-1][i]);
            }
            down = down -1;
            for(int i=down;i>=up;i--){
                 list.add(matrix[i][l]);
            }
            l=l+1;
        }
        
        return list;
    }
}