class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> relationFrom(n+1),relationTo(n+1);
        for(vector<int> t:trust){
            relationFrom[t[1]].push_back(t[0]);
            relationTo[t[0]].push_back(t[1]);
        }
        for(int i=1;i<=n;i++)
            if(relationFrom[i].size()==n-1 && relationTo[i].size()==0)
                return i;
        return -1;
    }
};