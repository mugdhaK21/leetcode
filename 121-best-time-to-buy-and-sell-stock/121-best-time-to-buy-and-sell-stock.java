class Solution {
    public int maxProfit(int[] prices) {
        int profit=0;
        int curr=prices[0];
        for(int i=1;i<prices.length;i++){
            if(curr>prices[i]){
                curr=prices[i];
            }else{
                profit = Math.max(profit, prices[i]-curr);
            }
        }
        return profit;
    }
}