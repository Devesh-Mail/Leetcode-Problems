class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,bool> m;
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int num:nums){
            m[num]=true;
        }
        for(int num=nums[0];num<nums[nums.size()-1];num++){
            if(!m[num])
                ans.push_back(num);
        }
        return ans;
    }
};