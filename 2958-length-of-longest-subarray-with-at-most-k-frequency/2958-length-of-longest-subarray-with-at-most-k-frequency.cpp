class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        umap[nums[0]]++;
        int maxLength=1;
        int l=0,r=1,N=nums.size();
        while(l<r && r<N){
            umap[nums[r]]++;
            while(l<=r && umap[nums[r]]>k){
                umap[nums[l]]--;
                l++;
            }
            maxLength=max(maxLength,r-l+1);
            r++;
        }
        return maxLength;
    }
};