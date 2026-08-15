class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        int c=0;
        for(int i=0;i<n;i++){
            ans^=nums[i];
            if(nums[i]==0)
                c++;
        }
        if(c==n)
            return 0;
        if(ans==0)
            return n-1;
        else
            return n;
    }
};