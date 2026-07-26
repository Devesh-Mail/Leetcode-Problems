class Solution {
    public int maximumProduct(int[] nums) {
        Arrays.sort(nums);
        int n=nums.length;
        int pro=-1;
        if(nums[0]<0 && nums[1]<0){
            pro=nums[0]*nums[1];
        }
        int res=nums[n-1]*nums[n-2]*nums[n-3];
        if(pro!=-1 && pro*nums[n-1] > res)
            return pro*nums[n-1];
        else
            return res;
    }
}