class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0,N=nums.size();
        for(int i=0;i<N;i++){
            if(i<N-1 && nums[i+1]==nums[i]){
                nums[k++]=nums[i];
                nums[k++]=nums[i+1];
                while(i<N-1 && nums[i]==nums[i+1]){
                    i++;
                }
            }else{
                nums[k++]=nums[i];
            }
        }
        return k;
    }
};