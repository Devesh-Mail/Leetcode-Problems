class Solution {
    public int countNumbersWithUniqueDigits(int n) {
        int ans=1;
        if(n==0)
            return ans;
        ans+=9;
        if(n==1)
            return ans;
        while(n>1){
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