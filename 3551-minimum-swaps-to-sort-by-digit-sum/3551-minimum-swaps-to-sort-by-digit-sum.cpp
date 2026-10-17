class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int N=nums.size();
        vector<pair<pair<int,int>,int>> ans(N);
        for(int i=0;i<N;i++){
            int sum=digitSum(nums[i]);
            ans[i]={{sum,nums[i]},i};
        }
        sort(ans.begin(),ans.end(),[](const auto& a,const auto& b){
            if(a.first.first==b.first.first)
                return a.first.second<b.first.second;
            else
                return a.first.first<b.first.first;
        });
        int res=0;
        vector<int> vis(N);
        for(int i=0;i<N;i++){
            int cycle_size=0;
            int j=i;
            if(vis[i]|| i==ans[i].second)
                continue;
            while(!vis[j]){
                vis[j]=true;
                j=ans[j].second;
                cycle_size++;
            }
            if(cycle_size>1)
                res+=cycle_size-1;
        }
        return res;
    }
private:
    int digitSum(int num){
        int ans=0;
        while(num>0){
            ans+=(num%10);
            num/=10;
        }
        return ans;
    }
};