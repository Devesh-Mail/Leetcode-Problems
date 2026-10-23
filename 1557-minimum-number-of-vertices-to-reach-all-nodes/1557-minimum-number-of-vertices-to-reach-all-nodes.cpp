class Solution {
public:
    vector<int> findSmallestSetOfVertices(int N, vector<vector<int>>& edges) {
        vector<vector<int>> graph(N);
        vector<int> degree(N);
        for(vector<int> &e:edges){
            graph[e[0]].push_back(e[1]);
            degree[e[1]]++;
        }
        vector<int> ans;
        for(int i=0;i<N;i++){
            if(degree[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};