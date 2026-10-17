class Solution {
public:
    bool ans=true;
    bool canFinish(int N, vector<vector<int>>& prerequisites) {
        vector<vector<int>> preq(N);
        for(vector<int> &pre:prerequisites){
            preq[pre[1]].push_back(pre[0]);
        }
        vector<bool> vis(N);
        for(int i=0;i<N;i++){
            for(int p:preq[i]){
                vis[p]=true;
                dfs(preq,p,N,vis,i);
            }
            vis.assign(N,false);
        }
        return ans;
    }
private:
    void dfs(vector<vector<int>> &preq,int index,int N,vector<bool> &vis,int start){
        if(index==start)
            ans=false;
        if(!ans)
            return;
        for(int p:preq[index]){
            if(vis[p])
                continue;
            vis[p]=true;
            dfs(preq,p,N,vis,start);
        }
    }
};