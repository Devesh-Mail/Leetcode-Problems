class NumMatrix {
public:
    vector<vector<long long>> presum;
    int R,C;
    NumMatrix(vector<vector<int>>& matrix) {
        R=matrix.size();
        C=matrix[0].size();
        for(int r=0;r<R;r++){
            vector<long long> t(C);
            for(int c=0;c<C;c++){
                if(c==0){
                    t[c]=matrix[r][c];
                    continue;
                }
                t[c]+=matrix[r][c]+t[c-1];
            }
            presum.push_back(t);
        }
        for(int c=0;c<C;c++){
            for(int r=1;r<R;r++){
                presum[r][c]+=presum[r-1][c];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        long long ans=presum[row2][col2];
        if(row1!=0 && col1!=0){
            ans+=presum[row1-1][col1-1];
            ans-=presum[row2][col1-1];
            ans-=presum[row1-1][col2];
        }else if(row1==0 && col1!=0){
            ans-=presum[row2][col1-1];
        }else if(row1!=0 && col1==0){
            ans-=presum[row1-1][col2];
        }
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */