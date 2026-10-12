class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int R=board.size(),C=board[0].size();
        vector<vector<bool>> vis(R,vector<bool>(C));
        for(int i=0;i<R;i++){
            if(!vis[i][C-1] && board[i][C-1]=='O')
                fill(board,R,C,vis,i,C-1);
            if(board[i][0]=='O' && !vis[i][0])
                fill(board,R,C,vis,i,0);
        }

        for(int i=0;i<C;i++){
            if(board[R-1][i]=='O' && !vis[R-1][i])
                fill(board,R,C,vis,R-1,i);
            if(board[0][i]=='O' && !vis[0][i])
                fill(board,R,C,vis,0,i);
        }
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                if(!vis[r][c] && board[r][c]=='O')
                    board[r][c]='X';
            }
        }
    }
private:
    void fill(vector<vector<char>> &board,int R,int C,vector<vector<bool>> &vis,int r,int c){
        cout<<r<<" "<<c<<endl;
        int diff[5]={-1,0,1,0,-1};
        vis[r][c]=true;
        for(int i=0;i<4;i++){
            int rd=r+diff[i];
            int cd=diff[i+1]+c;
            if(rd<0 || cd<0 || rd>=R || cd>=C || vis[rd][cd] || board[rd][cd]=='X')
                continue;
            fill(board,R,C,vis,rd,cd);
        }
    }
};