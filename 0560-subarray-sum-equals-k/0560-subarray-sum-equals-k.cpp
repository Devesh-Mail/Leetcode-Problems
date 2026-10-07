class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0,c=0;
        unordered_map<int,int> count;
        count[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(count.contains(sum-k))
            {
                c+=count[sum-k];
            }
            if(!count.contains(sum))
                count[sum]=1;
            else
                count[sum]++;
        }
        return c;
    }
};