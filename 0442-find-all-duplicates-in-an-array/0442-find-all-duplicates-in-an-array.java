class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        List<Integer> ans=new ArrayList<>();
        Map<Integer,Boolean> map=new HashMap<>();
        for(int num:nums){
            if(map.containsKey(num)){
                ans.add(num);
            }else{
                map.put(num,true);
            }
        }
        return ans;
    }
}