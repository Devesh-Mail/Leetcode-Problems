class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int R=matrix.size(),C=matrix[0].size();
        vector<vector<int>> sum(R+1,vector<int>(C+1,0));
        for(int r=1;r<=R;r++){
            for(int c=1;c<=C;c++){
                sum[r][c]=sum[r][c-1]+matrix[r-1][c-1];
            }
        }
        for(int c=1;c<=C;c++){
            for(int r=1;r<=R;r++){
                sum[r][c]+=sum[r-1][c];
            }
        }
        int ans=INT_MIN;
        for(int r1=1;r1<=R;r1++){
            for(int c1=1;c1<=C;c1++){
                for(int r2=r1;r2<=R;r2++){
                    for(int c2=c1;c2<=C;c2++){
                        int val=sum[r2][c2]-sum[r2][c1-1]-sum[r1-1][c2]+sum[r1-1][c1-1];
                        if(val<=k){
                            ans=max(ans,val);
                        }
                    }
                }
            }
        }
        return ans;
    }
};