class Solution {
public:
    int latestDayToCross(int R, int C, vector<vector<int>>& cells) {
        vector<int> leader(R*C+2);
        vector<bool> water(R*C+2,false);
        for(int i=0;i<R*C+2;i++)
            leader[i]=i;

        int days=0;
        vector<vector<int>> diff={{0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1}};
        for(vector<int> cell:cells){
            int row=cell[0]-1,col=cell[1]-1;
            water[row*C+col+1]=true;
            for(vector<int> d:diff){
                int rdiff=d[0]+row,cdiff=d[1]+col;
                if(rdiff>=0 && rdiff<R && cdiff>=0 && cdiff<C && water[rdiff*C+cdiff+1]){
                    join(leader,row*C+col+1,rdiff*C+cdiff+1);
                }
            }
            if(col==0){
                join(leader,0,row*C+1);
            }else if(col==C-1){
                join(leader,R*C+1,row*C+C);
            }
            if(find(leader,0)==find(leader,R*C+1))
                break;
            else
                days++;
        }
        return days;
    }
private:
    void join(vector<int>& leader,int left,int right){
        leader[find(leader,right)]=leader[find(leader,left)];
    }
    int find(vector<int> & leader,int node){
        if(leader[node]==node)
            return node;
        leader[node]=find(leader,leader[node]);
        return leader[node];
    }
};