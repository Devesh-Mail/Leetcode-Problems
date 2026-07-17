class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int Max=0;
        int one=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==1)
                one++;
            else
                one=0;
            Max=Math.max(Max,one);
        }
        return Max;
    }
}