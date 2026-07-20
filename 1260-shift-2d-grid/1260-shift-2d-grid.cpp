class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int R=grid.size(),C=grid[0].size();
        k%=(R*C);
        vector<int> temp(R*C);
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                temp[i*C+j]=grid[i][j];
            }
        }
        int t=R*C-k;
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(t==R*C)
                    t=0;
                grid[r][c]=temp[t];
                t++;
            }
        }
        return grid;
    }
};