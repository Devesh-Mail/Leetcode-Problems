class Solution {
    public int minMoves2(int[] nums) {
        long sum=0;
        int n=nums.length;
        Arrays.sort(nums);
        int median=nums[n/2];
        int ans=0;
        for(int num:nums){
            ans+=Math.abs(num-median);
        }
        return ans;
    }
}