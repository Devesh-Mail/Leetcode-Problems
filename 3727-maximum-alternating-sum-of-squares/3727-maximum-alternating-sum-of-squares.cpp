class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int N=nums.size();
        int cnt=(N+1)/2;
        for(int i=0;i<N;i++)
            nums[i]=abs(nums[i]);
        sort(nums.begin(),nums.end());
        int ind=N-1;
        long long ans=0;
        while(cnt--){
            ans+=(nums[ind]*nums[ind]);
            ind--;
        }
        while(ind>=0){
            ans-=(nums[ind]*nums[ind]);
            ind--;
        }
        return ans;
    }
};