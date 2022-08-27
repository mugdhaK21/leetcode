class Solution {
    public List<List<Integer>> generate(int numRows) {
       List<List<Integer>> result=new ArrayList<>();
        
        if(numRows<=0)
            return result;
        
        
        List<Integer> pre =new ArrayList<Integer>();
        pre.add(1);
        result.add(pre);
        
        for(int j=2;j<=numRows;j++){
             List<Integer> cur =new ArrayList<Integer>();
             cur.add(1);
             for(int i=0;i<pre.size()-1;i++){
                 cur.add(pre.get(i)+pre.get(i+1));
             }
            cur.add(1);
            result.add(cur);
            pre=cur;
        }
        return result;
    }
}