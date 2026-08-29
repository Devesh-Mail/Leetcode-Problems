class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        int start=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(sum<target){
                sum+=nums[i];
            }
            while(sum>=target){
                ans=min(ans,i-start+1);
                sum-=nums[start];
                start++;
            }
        }
        return (ans==INT_MAX ? 0:ans);
    }
};