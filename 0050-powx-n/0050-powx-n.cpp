class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if(n<0){
            N=-N;
            x=1/x;
        }else if(N==0){
            return 1;
        }
        double half=myPow(x,N/2);
        if(N%2==1){
            return half*half*x;
        }else{
            return half*half;
        }
    }
};