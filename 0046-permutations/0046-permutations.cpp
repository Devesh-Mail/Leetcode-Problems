class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int N=nums.size();
        vector<int> step(N);
        vector<vector<int>> ans;
        vector<bool> vis(N,false);
        build(ans,nums,step,0,vis,N);
        sort(ans.begin(),ans.end());
        return ans;
    }
private:
    void build(vector<vector<int>> &ans,vector<int> &nums,vector<int> &step,int index,vector<bool> & vis,int N){
        if(index==N){
            ans.push_back(step);
            return;
        }
        for(int i=0;i<N;i++){
            if(vis[i]){
                continue;
            }
            vis[i]=true;
            step[index]=nums[i];
            build(ans,nums,step,index+1,vis,N);
            vis[i]=false;
        }
    }
};