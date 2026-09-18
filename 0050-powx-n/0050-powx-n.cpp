class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            N=-N;
            x=1/x;
        }else if(N==0){
            return 1;
        }
        double rem=1;
        if(N%2==1){
            rem=x;
            N--;
        }
        return(rem*myPow(x*x,N/2));
    }
};