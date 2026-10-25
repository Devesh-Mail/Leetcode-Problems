class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int R=grid.size(),C=grid[0].size();
        vector<vector<bool>> vis(R,vector<bool>(C));
        int ans=0;
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(grid[r][c]==1 || vis[r][c])
                    continue;
                int flag=dfs(grid,vis,R,C,r,c,0);
                if(flag==0)
                    ans++;
            }
        }
        return ans;
    }
private:
    int dfs(vector<vector<int>> &grid,vector<vector<bool>> &vis,int R,int C,int r,int c,int count){ 
        int diff[5]={-1,0,1,0,-1};
        vis[r][c]=true;
        for(int i=0;i<4;i++){
            int rd=r+diff[i];
            int cd=c+diff[i+1];
            if(rd<0 || rd>=R || cd<0 || cd>=C){
                count=1;
                continue;
            }
            if(vis[rd][cd] || grid[rd][cd]==1)
                continue;
            count=dfs(grid,vis,R,C,rd,cd,count);
        }
        return count;
    }
};