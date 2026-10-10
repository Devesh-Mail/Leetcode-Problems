class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int N=intervals.size();
        for(int i=0;i<N;i++){
            int j=i;
            int currStart=intervals[i][0];
            int currEnd=intervals[i][1];
            for(;j<N;j++){
                if(currEnd>=intervals[j][0]){
                    currEnd=max(intervals[j][1],currEnd);
                }else{
                    break;
                }
                i=j;
            }
            ans.push_back({currStart,currEnd});
        }
        return ans;
    }
};