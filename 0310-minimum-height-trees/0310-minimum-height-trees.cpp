class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        if(n==1)
            return {0};
        vector<int> joins(n);
        vector<vector<int>> joints(n);
        for(vector<int> e:edges){
            joints[e[0]].push_back(e[1]);
            joints[e[1]].push_back(e[0]);
            joins[e[0]]++;
            joins[e[1]]++;
        }
        queue<int> que;
        for(int i=0;i<n;i++)
            if(joins[i]==1)
                que.push(i);
        int flag=n;
        while(flag>2){
            int size=que.size();
            flag-=size;
            while(size--){
                int curr=que.front();
                que.pop();
                for(int e:joints[curr]){
                    joins[e]--;
                    if(joins[e]==1)
                        que.push(e);
                }
            }
        }
        while(!que.empty()){
            ans.push_back(que.front());
            que.pop();
        }
        return ans;
    }
};