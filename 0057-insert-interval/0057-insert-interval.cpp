class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int N=intervals.size();
        int start=newInterval[0];
        int end=newInterval[1];
        int i=0;
        while(i<N && intervals[i][1]<start){
            i++;
        }
        cout<<i<<" ";
        int j=i;
        while(i<N && intervals[i][0]<=end){
            newInterval[0]=min(newInterval[0],intervals[i][0]);
            newInterval[1]=max(newInterval[1],intervals[i][1]);
            i++;
        } 
        intervals.erase(intervals.begin()+j,intervals.begin()+i);
        intervals.insert(intervals.begin()+j,newInterval);
        N=intervals.size();

        return intervals;
    }
};