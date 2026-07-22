class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        ans.push_back({1});
        for(int i=1;i<=rowIndex;i++){
            vector<int> a;
            a.push_back(1);
            for(int j=1;j<i;j++){
                a.push_back(ans[i-1][j]+ans[i-1][j-1]);
            }
            a.push_back(1);
            ans.push_back(a);
        }
        return ans[rowIndex];
    }
};