class NumArray {
public:
    int n;
    vector<int> a;
    NumArray(vector<int>& nums) {
        n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0)
                a.push_back(nums[i]+a[i-1]);
            else
                a.push_back(nums[i]);

        }
    }
    
    int sumRange(int left, int right) {
        return a[right]-(left==0 ?0:a[left-1]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */