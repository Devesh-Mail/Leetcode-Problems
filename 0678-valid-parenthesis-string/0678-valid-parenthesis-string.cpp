class Solution {
public:
    bool checkValidString(string s) {
        int open=0,close=0;
        int N=s.length();
        for(int i=0;i<N;i++){
            if(s[i]==')'){
                open--;
                close--;
            }else if(s[i]=='*'){
                open++;
                close--;
            }else{
                open++;
                close++;
            }
            if(close<0)
                close=0;
            if(open<0)
                return false;
        }
        return close==0;
    }
};