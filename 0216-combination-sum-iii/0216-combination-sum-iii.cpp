class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<int> num={1,2,3,4,5,6,7,8,9};
        backtracking(ans,temp,num,0,0,0,k,n);
        return ans;
    }
private:
    void backtracking(vector<vector<int>> &ans,vector<int> t,vector<int> &num,int index,int sum,int count,int k,int n){
        if(sum==n && count==k){
            ans.push_back(t);
            return;
        }else if(sum>n || count>k){
            return;
        }
        for(int i=index;i<9;i++){
            t.push_back(num[i]);
            sum+=num[i];
            backtracking(ans,t,num,i+1,sum,count+1,k,n);
            sum-=num[i];
            t.erase(t.begin()+count);
        }
    }
};