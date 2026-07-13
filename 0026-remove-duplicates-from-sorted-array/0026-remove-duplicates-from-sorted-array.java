class Solution {
    public int removeDuplicates(int[] nums) {
        Set<Integer> s=new HashSet<>();
        for(int num:nums){
            s.add(num);
        }
        int k=0;
        for(int num:s){
            nums[k]=num;
            k++;
        }
        for(int i=0;i<k;i++){
            for(int j=i+1;j<k;j++){
                if(nums[i]>nums[j]){
                    int t=nums[i];
                    nums[i]=nums[j];
                    nums[j]=t;
                }
            }
        }
        return s.size();

    }
}