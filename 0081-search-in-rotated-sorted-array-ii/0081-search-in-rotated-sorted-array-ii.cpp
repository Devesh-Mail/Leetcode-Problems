class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid=(h+l)/2;
            if(nums[mid]==k){
                return true;
            }
            if(nums[l]==nums[mid] && nums[mid]==nums[h]){
                l++;
                h--;
            }else if(nums[l]<=nums[mid]){
                if(nums[l]<=k && k<=nums[mid]){
                    h=mid-1;
                }else{
                    l=mid+1;
                }
            }else{
                if(nums[mid]<=k && k<=nums[h]){
                    l=mid+1;
                }else{
                    h=mid-1;
                }
            }
        }
        return false;
    }
};