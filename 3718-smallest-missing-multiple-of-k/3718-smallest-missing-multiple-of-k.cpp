class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,bool> umap;
        for(int num:nums)
            umap[num]=true;
        for(int num=k;;num+=k){
            if(!umap[num]){
                return num;
            }
        }
        return 0;
    }
};