class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int R=grid.size(),C=grid[0].size();
        vector<vector<bool>> vis(R,vector<bool> (C));
        int ans=0;
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(grid[r][c]==0 || vis[r][c])
                    continue;
                long long curr=dfs(grid,vis,R,C,r,c);
                if(curr%k==0)
                    ans++;
            }
        }
        return ans;
    }
private:
    long long dfs(vector<vector<int>> &grid,vector<vector<bool>> &vis,int R,int C,int r,int c){
        vis[r][c]=true;
        int diff[5]={-1,0,1,0,-1};
        long long curr=grid[r][c];
        for(int i=0;i<4;i++){
            int rd=r+diff[i];
            int cd=c+diff[i+1];
            if(rd<0 || cd<0 || rd>=R || cd>=C || vis[rd][cd] || grid[r][c]==0)
                continue;
            curr+=dfs(grid,vis,R,C,rd,cd);
        }
        return curr;
    }
};