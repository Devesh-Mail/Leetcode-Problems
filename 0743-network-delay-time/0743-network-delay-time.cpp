class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int k) {
        vector<vector<pair<int,int>>> graph(N+1);
        for(const vector<int> &e:times){
            graph[e[0]].push_back({e[2],e[1]});
        }
        for(vector<pair<int,int>> &g:graph)
            sort(g.begin(),g.end());
        vector<int> dist(N+1,INT_MAX);
        dfs(graph,k,0,dist);
        
        int ans=0;
        for(int i=1;i<=N;i++){
            if(dist[i]==INT_MAX)
                return -1;
            ans=max(ans,dist[i]);
        }
        return ans;
    }
private:
    void dfs(vector<vector<pair<int,int>>> &graph,int curr,int d,vector<int> &dist){
        if(d>=dist[curr])
            return;
        dist[curr]=d;
        for(pair<int,int> &g:graph[curr])
            dfs(graph,g.second,d+g.first,dist);
    }
};