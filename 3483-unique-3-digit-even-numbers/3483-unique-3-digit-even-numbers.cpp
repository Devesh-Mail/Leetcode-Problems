class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int N=digits.size();
        sort(digits.begin(),digits.end());
        set<vector<int>> s;
        for(int i=0;i<N;i++){
            if(digits[i]==0)    
                continue;
            for(int j=0;j<N;j++){
                if(j==i)
                    continue;
                for(int k=0;k<N;k++){
                    if(digits[k]%2==1)
                        continue;
                    if(k==i || k==j)
                        continue;
                    vector<int> a={digits[i],digits[j],digits[k]};
                    s.insert(a);
                }
            }
        }
        return s.size();
    }
};