class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=5000;
        int N=nums.size();
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                for(int k=j+1;k<N;k++){
                    int sum=nums[i]+nums[j]+nums[k];
                    if(abs(sum-target) < abs(ans-target)){
                        ans=sum;
                    }
                }
            }
        }
        return ans;
    }
};