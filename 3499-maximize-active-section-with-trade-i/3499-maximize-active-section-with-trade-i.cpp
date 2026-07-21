class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ones=0;
        vector<int>zeroGroups;
        int i=0,n=s.size();
        while(i<n){
            if(s[i] == '1') 
            { 
                ones++; i++; 
            }
            else{
                int j = i;
                while (j < n && s[j] == '0') j++;
                zeroGroups.push_back(j-i);
                i=j;
            }
        }
        int best=0;
        for (int k=0;k+1<zeroGroups.size();k++)
            best =max(best,zeroGroups[k]+zeroGroups[k+1]);
        return ones+best;
    }
};