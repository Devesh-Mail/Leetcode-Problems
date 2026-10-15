class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int N=nums.size();
        int ans=0;
        for(int i=0;i<N;i++){
            map<int,int> mp;
            for(int j=i;j<N;j++){
                mp[nums[j]]++;
                ans+=(mp.size()*mp.size());
            }
        }
        return ans;
    }
};