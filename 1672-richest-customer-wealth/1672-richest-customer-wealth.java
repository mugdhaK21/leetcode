class Solution {
    public int maximumWealth(int[][] accounts) {
        int ans=Integer.MIN_VALUE;
        for(int p=0;p<accounts.length;p++){
            int sum=0;
            for(int acc=0;acc<accounts[p].length;acc++){
                sum+=accounts[p][acc];
            }
            if(sum>ans){
                ans=sum;
            }
        }
        return ans;
    }
}