class Solution {
public:
    vector<int> findSubtreeSizes(vector<int>& parent, string s) {

        int N=parent.size();
        vector<vector<int>> graph(N),finalGraph(N);
        for(int i=1;i<N;i++)
            graph[parent[i]].push_back(i);
        vector<stack<int>> check(26);
        dfs(graph,parent,check,0,s);
        vector<int> result(N);
        for(int i=1;i<N;i++)
            finalGraph[parent[i]].push_back(i);
        result[0]=count(finalGraph,result,0);
        return result;

    }
    void dfs(vector<vector<int>>& graph,vector<int>& parent,vector<stack<int>>& check,int curr,string& s){

        if(!check[s[curr]-'a'].empty())
            parent[curr]=check[s[curr]-'a'].top();
        check[s[curr]-'a'].push(curr);
        for(int node:graph[curr]){
            dfs(graph,parent,check,node,s);
        }
        check[s[curr]-'a'].pop();

    }
    int count(vector<vector<int>>& graph,vector<int>& result,int curr){

        if(graph[curr].size()==0)
            return 1;
        int c=0;
        for(int node:graph[curr]){
            int tc=count(graph,result,node);
            c+=tc;
            result[node]=tc;
        }
        return c+1;

    }
};