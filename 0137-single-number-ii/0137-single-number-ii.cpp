class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int N=nums.size();
        sort(nums.begin(),nums.end());
        if(N==1)
            return nums[0];
        if(N>1 && nums[0]!=nums[1])
            return nums[0];
        for(int i=1;i<N-1;i++){
            if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        if(N>1 && nums[N-1]!=nums[N-2])
            return nums[N-1];
        return 0;
    }
};