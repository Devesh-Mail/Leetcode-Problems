class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int N=arrivalTime.size();
        int lasting=*max_element(lights.begin(),lights.end());
        int ans=0;
        for(int i=0;i<N;i++){
            arrivalTime[i]%=period;
            if(arrivalTime[i]>= lasting){
                ans=max(ans,period-arrivalTime[i]);
            }
        }
        return ans;
    }
};