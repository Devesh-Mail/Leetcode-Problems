class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int N=numbers.size();
        for(int i=0;i<N;i++){
            auto it=lower_bound(numbers.begin()+i+1,numbers.end(),target-numbers[i]);
            if(it !=numbers.end() && target-numbers[i]==*it)
                return{i+1,(int)(it-numbers.begin())+1};
        }
        return {};
    }
};