class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int R=matrix.size();
        int C=matrix[0].size();
        vector<bool> row(R),col(C);
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(matrix[r][c]==0)
                    row[r]=col[c]=true;
            }
        }
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(row[r] || col[c]){
                    matrix[r][c]=0;
                }
            }
        }
    }
};