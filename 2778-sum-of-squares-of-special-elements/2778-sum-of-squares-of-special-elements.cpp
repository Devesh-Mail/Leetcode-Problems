class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int N=nums.size();
        int ans=0;
        for(int i=0;i<N;i++)
            if(N%(i+1)==0)
                ans+=(nums[i]*nums[i]);
        return ans;
    }
};