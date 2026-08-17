class Solution {
public:
    int minOperations(string s) {
        int ans=INT_MAX,N=s.length();
        s+=s;
        for(int i=0;i<N;i++){
            int curr=i;
            int l=i,r=i+N-1;
            while(l<r){
                int diff=abs(s[r%N]-s[l%N]);
                curr+=min(diff,26-diff);
                l++;
                r--;
            }
            ans=min(ans,curr);
        }
        return ans;
    }
};