class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int N=matrix.size();
        vector<int> ans(N);
        for(int r=0;r<N;r++){
            for(int c=r;c<N;c++){
                if(matrix[r][c]==1){
                    ans[r]++;
                    ans[c]++;
                }
            }
        }
        return ans;
    }
};