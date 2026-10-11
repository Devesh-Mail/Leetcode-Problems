class Solution {
public:
    int minimumTotal(vector<vector<int>>& a) {
        int N=a.size();
        vector<vector<int>> ans;
        ans.push_back({a[0][0]});
        for(int r=1;r<N;r++){
            vector<int> t;
            for(int c=0;c<a[r].size();c++){
                int n1=(c>a[r-1].size()-1? INT_MAX: ans[r-1][c]);
                int n2=(c-1<0? INT_MAX:ans[r-1][c-1]);
                t.push_back(a[r][c]+min(n1,n2));
            }
            ans.push_back(t);
        }
        int res=INT_MAX;
        for(int r=0;r<ans.size();r++){
            for(int c=0;c<ans[r].size();c++)
                cout<<ans[r][c]<<" ";
            cout<<endl;
        }
        for(int num:ans[ans.size()-1]){
            res=min(res,num);
        }
        return res;
    }
};