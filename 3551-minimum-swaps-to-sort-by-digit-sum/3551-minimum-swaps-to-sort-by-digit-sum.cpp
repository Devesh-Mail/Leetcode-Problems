class Solution {
public:
    int sum(int n) {
        int ans = 0;
        while(n>0) {
            ans += n%10;
            n/=10;
        }
        return ans;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++) {
            a[i] = {sum(nums[i]), nums[i]};
        }
        sort(a.begin(), a.end());
        vector<int> b(n);
        for(int i=0;i<n;i++) {
            b[i] = a[i].second;
        }   
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) {
            mp[nums[i]] = i;
        }
        int ans = 0;
        for(int i=0;i<n;i++) {
            if(nums[i] != b[i]) {
                int j = mp[b[i]];
                swap(nums[i], nums[j]);
                mp[nums[j]] = j;
                mp[nums[i]] = i;
                ans++;
            }
        }
        return ans;

    }
};