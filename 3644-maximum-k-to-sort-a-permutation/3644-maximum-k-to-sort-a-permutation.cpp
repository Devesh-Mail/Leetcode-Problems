class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int k=-1,N=nums.size();
        for(int i=0;i<N;i++){
            if(nums[i]!=i)
                k&=nums[i];
        }
        return max(k,0);
    }
};