class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        set<int> s(nums.begin(),nums.end());
        int prev=-1111;
        for(int num:s){
            if(prev==-1111){
                prev=num;
                continue;
            }
            for(int i=prev+1;i<num;i++){
                ans.push_back(i);
            }
            prev=num;
        }
        return ans;
    }
};