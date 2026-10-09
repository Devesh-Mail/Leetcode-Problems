class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int N=nums.size();
        vector<int> step(N);
        vector<bool> vis(N,false);
        set<vector<int>> s;
        build(s,nums,step,0,vis,N);
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
private:
    void build(set<vector<int>> &ans,vector<int> &nums,vector<int> &step,int index,vector<bool> & vis,int N){
        if(index==N){
            ans.insert(step);
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