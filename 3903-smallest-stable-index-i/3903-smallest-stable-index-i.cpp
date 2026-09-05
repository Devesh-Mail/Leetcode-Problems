class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int N=nums.size();
        vector<int> MAX(N),MIN(N);
        MAX[0]=nums[0];
        MIN[N-1]=nums[N-1];
        for(int i=1;i<N;i++){
            MAX[i]=max(nums[i],MAX[i-1]);
        }
        for(int i=N-2;i>=0;i--){
            MIN[i]=min(nums[i],MIN[i+1]);
        }
        for(int i=0;i<N;i++){
            int value=MAX[i]-MIN[i];
            if(value<=k){
                return i;
            }
        }
        return -1;
    }
};