class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> m;
        for(char ch:word)
            m[ch]++;
        int size=m.size();
        int count=0;
        int two=1;
        vector<int> a;
        for(auto it:m)
            a.push_back(it.second);
        sort(a.begin(),a.end(),greater<int>());
        int k=0;
        while(size>8){
            for(int i=0;i<8;i++){
                count+=(a[k++]*two);
            }
            two++;
            size-=8;
        }
        for(int i=0;i<size;i++){
            count+=(a[k++]*two);
        }
        return count;
    }
};