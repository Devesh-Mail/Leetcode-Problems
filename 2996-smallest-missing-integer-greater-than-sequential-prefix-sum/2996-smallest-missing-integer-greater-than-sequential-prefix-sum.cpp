class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int maxSum=1,sum=1,maxInd=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1)
                maxSum++;
            else
                break;
        }
        unordered_map<int,bool> umap;
        for(int i=0;i<n;i++){
            umap[nums[i]]=true;
        }
        sum=0;
        for(int i=0;i<maxSum;i++){
            sum+=nums[i];
        }
        cout<<sum<<" "<<maxInd<<" "<<maxSum;
        for(int i=sum;;i++){
            if(!umap[i]){
                return i;
            }
        }
        return 0;
    }
};