class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int carry=0;
        int n1=num1.length(),n2=num2.length();
        int i=n1-1;
        int j=n2-1;
        while(i>=0 || j>=0){
            int sum=carry;
            sum+=(i<0 ? 0 : num1[i]-'0');
            sum+=(j<0 ? 0 : num2[j]-'0');
            ans=(char)((sum%10)+'0')+ans;
            carry=sum/10;
            i--;
            j--;
        }
        if(carry>0)
            ans=(char)(carry+'0')+ans;
        return ans;
    }
};