class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans=0;
        int target=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            ans+=(target-nums[i]);
        }
        return ans;
    }
};