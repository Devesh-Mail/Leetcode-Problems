class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int N=edges.size();
        vector<int> degree(N+1);
        vector<vector<int>> graph(N+1);
        for(vector<int> e:edges){
            graph[e[0]].push_back(e[1]);
            graph[e[1]].push_back(e[0]);
            degree[e[0]]++;
            degree[e[1]]++;
        }
        vector<int> child(N+1);
        vector<bool> vis(N+1);
        vis[1]=true;
        pair<int,int> cycle=dfs(graph,1,child,vis);
        map<int,bool> cycleElements;
        cout<<cycle.first<<" "<<cycle.second<<endl;
        int curr=cycle.second;
        cycleElements[cycle.first]=true;
        while(curr!=cycle.first){
            cycleElements[curr]=true;
            curr=child[curr];
        }
        vector<int> ans(2);
        for(int i=N-1;i>=0;i--){
            if(cycleElements[edges[i][0]] && cycleElements[edges[i][1]]){
                ans={edges[i][0],edges[i][1]};
                break;
            }
        }
        return ans;
    }
private:
    pair<int,int> dfs(vector<vector<int>> &graph,int curr,vector<int> &child,vector<bool> &vis){
        cout<<curr<<endl;
        for(int node:graph[curr]){
            if(vis[node] && node!=child[curr])
                return {node,curr};
            if(vis[node])
                continue;
            child[node]=curr;
            vis[node]=true;
            pair<int,int> cycle=dfs(graph,node,child,vis);
            if(cycle.first!=0)
                return cycle;
        }
        return {};
    }
};