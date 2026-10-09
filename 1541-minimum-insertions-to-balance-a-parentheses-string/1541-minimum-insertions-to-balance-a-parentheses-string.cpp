class Solution {
public:
    int minInsertions(string s) {
        int ans=0;
        int N=s.length();
        stack<char> st;
        for(int i=0;i<N;i++){
            if(st.empty()){
                if(s[i]=='('){
                    st.push(s[i]);
                }else{
                    if(i<N-1 && s[i+1]==')'){
                        ans++;
                        i++;
                    }else{
                        ans+=2;
                    }
                }
            }else{
                if(s[i]=='('){
                    st.push(s[i]);
                }else{
                    if(i<N-1 && s[i+1]==')'){
                        ans+=0;
                        i++;
                    }else{
                        ans++; 
                    }
                    st.pop();
                }
            }
        }
        ans+=(st.size()*2);
        return ans;
    }
};