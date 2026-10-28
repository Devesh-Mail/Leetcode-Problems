class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int R=grid.size(),C=grid[0].size();
        vector<vector<unordered_set<int>>> ans(R,vector<unordered_set<int>> (C));
        ans[0][0].insert(grid[0][0]);
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(r+1<R){
                    for(int val:ans[r][c]){
                        ans[r+1][c].insert(val^grid[r+1][c]);
                    }
                }
                if(c+1<C){
                    for(int val:ans[r][c]){
                        ans[r][c+1].insert(val^grid[r][c+1]);
                    }
                }
            }
        }
        return *min_element(ans[R-1][C-1].begin(),ans[R-1][C-1].end());
    }
};