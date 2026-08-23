class Solution {
public:
    vector<string> out;
    string a="()";
    vector<string> generateParenthesis(int n) {
        stack<char> st;
        res("",n,st);
        return out;
    }
private:
    void res(string s,int n,stack<char> st){
        if(s.length()==2*n){
            for(char ch:s){
                if(ch=='('){
                    st.push('(');
                }
                else if(st.empty() || st.top()!='('){
                    return;
                }
                else{
                    st.pop();
                }
            }
            if(st.empty())
                out.push_back(s);
            return;
        }
        for(char ch:a){
            res(s+ch,n,st);
        }
    }
};