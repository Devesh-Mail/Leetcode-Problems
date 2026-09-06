class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,int> umap;
        umap[0]=-1;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int mod=sum%k;
            if(umap.find(mod)!=umap.end()){
                if(i-umap[mod]>1)
                    return true;
            }else{
                umap[mod]=i;
            }
        }
        return false;
    }
};