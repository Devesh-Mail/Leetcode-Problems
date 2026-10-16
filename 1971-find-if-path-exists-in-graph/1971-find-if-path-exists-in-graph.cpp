class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> leader(n);
        for(int i=1;i<n;i++)
            leader[i]=i;
        for(vector<int> e:edges)
            leader[find(leader,e[0])]=find(leader,e[1]);
        for(int i=0;i<n;i++)   
            leader[i]=find(leader,i);
        return leader[source]==leader[destination];
    }
private:
    int find(vector<int> &leader,int node){
        if(leader[node]==node)
            return node;
        leader[node]=find(leader,leader[node]);
        return leader[node];
    }
};