class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> ans(numRows);
        int R=0,k=0;
        while(k<s.length()){
            for(int i=0;i<numRows && k<s.length();i++)
                ans[i]+=s[k++];
            R=numRows-2;
            for(int i=1;k<s.length() && i<numRows-1;i++)
                ans[R--]+=s[k++];
        }
        string res="";
        for(int i=0;i<numRows;i++){
            cout<<res[i]<<endl;
            res+=ans[i];
        }
        return res;
    }
};