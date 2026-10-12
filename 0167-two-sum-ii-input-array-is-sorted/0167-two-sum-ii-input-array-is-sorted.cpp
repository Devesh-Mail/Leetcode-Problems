class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> mp;
        int N=numbers.size();
        for(int i=0;i<N;i++)
            mp[numbers[i]]=i;
        for( int i=0;i<N;i++){
            if(mp[target-numbers[i]]>i)
                return {i+1,mp[target-numbers[i]]+1};
        }
        return {};
    }
};