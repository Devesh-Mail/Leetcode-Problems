class Solution {
public:
    int find(vector<int>& leader,int node){
        if(leader[node]==node){
            return node;
        }
        leader[node]=find(leader,leader[node]);
        return leader[node];

    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int N=isConnected.size();
        vector<int> leader(N+1,0);
        for(int i=0;i<=N;i++)
            leader[i]=i;
        for(int r=0;r<N;r++){
            for(int c=0;c<N;c++){
                if(isConnected[r][c]==1){
                    leader[find(leader,c+1)]=find(leader,r+1);
                }
            }
        }
        unordered_map<int,int> m;
        for(int i=1;i<=N;i++)
            m[find(leader,i)]++;
        return m.size();
    }
};