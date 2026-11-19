class Solution {
    public int minimizeSum(int[] nums) {
        Arrays.sort(nums);
        int max1,max2,max3;
        int N=nums.length;
        max1=nums[N-1]-nums[2];
        max2=nums[N-3]-nums[0];
        max3=nums[N-2]-nums[1];
        return Math.min(max3,Math.min(max1,max2));
    }
}