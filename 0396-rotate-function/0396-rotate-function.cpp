class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        long long F=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            F+=i*nums[i];
        }
        long long ans=F;
        for(int i=n-1;i>0;i--){
            F+=(sum-n*nums[i]);
            ans=max(ans,F);
        }
        return ans;
    }
};