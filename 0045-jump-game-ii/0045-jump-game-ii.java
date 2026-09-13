class Solution {
    public int jump(int[] nums) {
        int N=nums.length;
        int l=0,r=0,ans=0;
        while(r<N-1){
            int far=r;
            for(int i=l;i<=r;i++){
                far=Math.max(far,i+nums[i]);
            }
            ans++;
            l=r+1;
            r=far;
        }
        return ans;
    }
}