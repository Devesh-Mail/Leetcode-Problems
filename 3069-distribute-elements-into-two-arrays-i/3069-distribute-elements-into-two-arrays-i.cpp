class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        queue<int>q1,q2;
        q1.push(nums[0]);
        q2.push(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(q1.back()>q2.back()){
                q1.push(nums[i]);
            }else{
                q2.push(nums[i]);
            }
        }
        vector<int> ans;
        while(!q1.empty()){
            ans.push_back(q1.front());
            q1.pop();
        }
        while(!q2.empty()){
            ans.push_back(q2.front());
            q2.pop();
        }
        return ans;
    }
};