class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(string str:operations){
            if(str[0]=='+'){
                int num=s.top();
                s.pop();
                int la=num+s.top();
                s.push(num);
                s.push(la);
            }else if(str=="C"){
                s.pop();
            }else if(str=="D"){
                s.push(s.top()*2);
            }else{
                s.push(stoi(str));
            }
        }
        int sum=0;
        while(!s.empty()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};