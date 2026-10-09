class Solution {
public:
    int totalNQueens(int n) {
        vector<bool> col(n),d1(2*n-1),d2(2*n-1);
        int ans=0;
        vector<string> step(n,string(n,'.'));
        build(&ans,step,n,0,col,d1,d2);
        return ans;
    }
private:
    void build(int *ans,vector<string> &step,int N,int r,vector<bool> &col,vector<bool> &d1,vector<bool> &d2){
        if(r==N){
            (*ans)++;
            return;
        }
        for(int c=0;c<N;c++){
            if(col[c] || d1[r+c] || d2[N-r+c]){
                continue;
            }
            step[r][c]='Q';
            col[c]=d1[r+c]=d2[N-r+c]=true;
            build(ans,step,N,r+1,col,d1,d2);
            step[r][c]='.';
            col[c]=d1[r+c]=d2[N-r+c]=false;
        }
    }
};