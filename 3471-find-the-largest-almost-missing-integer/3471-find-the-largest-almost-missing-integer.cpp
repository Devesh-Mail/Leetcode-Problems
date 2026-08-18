class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int> umap;
        for(int i=0;i<n;i++)
            umap[nums[i]]++;
        int ans=-1;
        if(n==k)
            ans= *max_element(nums.begin(),nums.end());
        else if(k==1){
            for(int i=0;i<n;i++){
                if(umap[nums[i]]==1 && nums[i]>ans){
                    ans=nums[i];
                }
            }
        }else{
            if(umap[nums[0]]==1 && umap[nums[n-1]]==1){
                ans=max(nums[0],nums[n-1]);
            }else if(umap[nums[0]]==1){
                ans=nums[0];
            }else if(umap[nums[n-1]]==1){
                ans=nums[n-1];
            }
        }
        return ans;
    }
};