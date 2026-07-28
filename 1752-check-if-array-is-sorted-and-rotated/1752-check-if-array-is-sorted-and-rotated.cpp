class Solution {
public:
    bool check(vector<int>& nums) {
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                if(count>0){
                    count--;
                }else{
                    return false;
                }
            }
        }
        if((count==0 && nums[0]>=nums[nums.size()-1]) || count==1){
            return true;
        }else{
            return false;
        }
    }
};