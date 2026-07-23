class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] a=new int[2];
        Map<Integer,Integer> map=new HashMap<>();
        for(int i=0;i<nums.length;i++)
            map.put(nums[i],i);
        for(int i=0;i<nums.length;i++){
            int curr=target-nums[i];
            if(map.containsKey(curr) && map.get(curr)!=i){
                a[0]=i;
                a[1]=map.get(curr);
                return a;
            }
        }
        return a;
    }
}