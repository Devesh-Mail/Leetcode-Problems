class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int R=grid.size(),C=grid[0].size();
        vector<vector<int>> dp(R+1,vector<int>(C+1,0));
        if(grid[0][0]==1)
            return 0;
        dp[1][1]=1;
        for(int r=1;r<=R;r++){
            for(int c=1;c<=C;c++){
                if(grid[r-1][c-1]==0 && r+c!=2)
                    dp[r][c]=dp[r-1][c]+dp[r][c-1];
            }
        }
        return dp[R][C];
    }
};