class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& prerequisites) {
        vector<vector<int>> preq(N);
        vector<int> needed(N);
        for(vector<int> p:prerequisites){
            preq[p[1]].push_back(p[0]);
            needed[p[0]]++;
        }
        queue<int> que;
        vector<int> ans;
        for(int i=0;i<N;i++){
            if(needed[i]==0){
                que.push(i);
                ans.push_back(i);
            }
        }
        while(!que.empty()){
            int curr=que.front();
            que.pop();
            for(int c:preq[curr]){
                needed[c]--;
                if(needed[c]==0){
                    que.push(c);
                    ans.push_back(c);
                }
            }
        }
        if(ans.size()!=N)
            return {};
        return ans;
    }
};