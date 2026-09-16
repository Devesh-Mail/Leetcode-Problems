class Solution {
    public int countNumbersWithUniqueDigits(int n) {
        int ans=1;
        if(n==0)
            return ans;
        while(n>0){
            int curr=9;
            for(int i=1;i<n;i++){
                curr*=(10-i);
            }
            ans+=curr;
            n--;
        }
        return ans;
    }
}