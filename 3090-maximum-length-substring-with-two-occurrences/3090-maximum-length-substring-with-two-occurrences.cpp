class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0,r=0,n=s.length();
        int maxLen=0;
        unordered_map<char,int> umap;
        while(l<=r && r<n){
            umap[s[r]]++;
            while(umap[s[r]]>2 && l<r){
                umap[s[l]]--;
                l++;
            }
            maxLen=max(maxLen,r-l+1);
            r++;
        }
        return maxLen;
    }
};