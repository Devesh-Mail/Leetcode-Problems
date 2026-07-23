class Solution {
    public int maxProfit(int[] prices) {
        if(prices.length==1)
            return 0;
        int buy=prices[0],profit=0;
        for(int i=1;i<prices.length;i++){
            if(prices[i]>prices[i-1]){
                profit+=prices[i]-buy;
                buy=prices[i];
            }else{
                buy=prices[i];
            }
        }
        return profit;
    }
}