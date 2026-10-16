class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int N=edges.size()+1;
        vector<int> count(N+1);
        for(vector<int> e:edges){
            count[e[0]]++;
            count[e[1]]++;
        }
        for(int i=1;i<=N;i++){
            if(count[i]==N-1)
                return i;
        }
        return -1;
    }
};