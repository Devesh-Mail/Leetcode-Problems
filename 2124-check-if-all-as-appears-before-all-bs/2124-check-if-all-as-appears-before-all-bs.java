class Solution {
    public boolean checkString(String s) {
        int N=s.length();
        int check=0;
        for(int i=N-1;i>=0;i--){
            if(s.charAt(i)=='a')
                check=i;
            else
                if(check>i)
                    return false;
        }
        return true;
    }
}