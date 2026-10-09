class Solution {
public:
    int minInsertions(string s) {
        int ans=0;
        int N=s.length();
        stack<char> st;
        for(int i=0;i<N;i++){
            if(st.empty()){
                if(s[i]=='('){
                    cout<<"A1 " ;
                    st.push(s[i]);
                }else{
                    if(i<N-1){
                        if(s[i+1]==')'){
                            cout<<"C1 ";
                            ans+=1;
                            i++;
                        }else{
                            cout<<"C2 ";
                            ans+=2;
                        }
                    }else{
                        cout<<"C3 ";
                        ans+=2;
                    }
                }
            }else{
                if(s[i]=='('){
                    cout<<"A2 ";
                    st.push(s[i]);
                }else{
                    if(i<N-1 && s[i+1]==')'){
                        cout<<"C4 ";
                        ans+=0;
                        i++;
                    }else{
                        cout<<"C5 ";
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