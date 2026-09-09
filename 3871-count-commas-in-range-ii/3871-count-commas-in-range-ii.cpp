class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000){
            return 0;
        }else if(n<1000000){
            return n-1000+1;
        }else if(n<1000000000){
            long ans=1000000L-1000;
            ans+=(n-1000000+1)*2;
            cout<<"A";
            return ans;
        }else if(n<1000000000000){
            long ans=1000000-1000;
            ans+=(1000000000-1000000)*2;
            ans+=(n-1000000000+1)*3;
            return ans;
        }else{
            long ans=1000000-1000;
            ans+=(1000000000-1000000)*2;
            ans+=(1000000000000-1000000000)*3;
            ans+=(n-1000000000000+1)*4;
            if(n==1e15)
                ans++;
            return ans;
        }
    }
};