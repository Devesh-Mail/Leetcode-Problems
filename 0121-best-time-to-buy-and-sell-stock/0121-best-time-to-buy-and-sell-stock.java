class Solution {
    public int maxProfit(int[] prices) {
        int profits=0,buys=prices[0];
        for(int i=1;i<prices.length;i++){
            buys=Math.min(buys,prices[i]);
            profits=Math.max(profits,prices[i]-buys);
        }
        return profits;
    }
}