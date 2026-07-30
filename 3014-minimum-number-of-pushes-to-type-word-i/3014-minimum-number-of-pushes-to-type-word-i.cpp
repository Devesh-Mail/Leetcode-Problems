class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int count=0;
        int two=1;
        while(n>8){
            count+=8*two;
            two+=1
            ;
            n-=8;
        }
        count+=(n*two);
        return count;
    }
};