class Solution {
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int N=quiet.size();
        vector<vector<int>> graph(N);
        for(vector<int> &r:richer)
            graph[r[1]].push_back(r[0]);
        vector<int> ans(N);
        for(int i=0;i<N;i++){
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
            pq.push({quiet[i],i});
            queue<int> que;
            que.push(i);
            vector<int> vis(N);
            while(!que.empty()){
                int curr=que.front();
                que.pop();
                for(int node:graph[curr]){
                    if(!vis[node])
                        que.push(node);
                    vis[node]=true;
                }
                pq.push({quiet[curr],curr});
            }
            ans[i]=pq.top().second;
        }
        return ans;
    }
};