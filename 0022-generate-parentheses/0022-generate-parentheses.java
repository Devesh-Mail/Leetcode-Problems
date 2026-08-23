class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> ans=new ArrayList<>();
        char[] s=new char[2*n];
        generate(ans,n,n,s,0,n);
        return ans;
    }
    private void generate(List<String> ans,int open,int close,char[] s,int index,int n){
        if(open==0 & close==0){
            String string=new String(s);
            ans.add(string);
            return;
        }
        if(index==n*2)
            return;
        if(open>0){
            s[index]='(';
            generate(ans,open-1,close,s,index+1,n);
        }
        if(index==2*n)
            return;
        if(close> open){
            s[index]=')';
            generate(ans,open,close-1,s,index+1,n);
        }
    }
}