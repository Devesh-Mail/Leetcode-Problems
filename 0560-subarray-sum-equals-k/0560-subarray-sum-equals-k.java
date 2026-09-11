class Solution {
    public int subarraySum(int[] nums, int k) {
        int sum=0,c=0;
        Map<Integer,Integer> count=new HashMap<>();
        count.put(0,1);
        for(int i:nums)
        {
            sum+=i;
            if(count.containsKey(sum-k))
                c+=count.get(sum-k);
            count.put(sum,count.getOrDefault(sum,0)+1);
        }
        return c;

    }
}