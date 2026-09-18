class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int,string> umap;
        umap[1000]="M";
        umap[900]="CM";
        umap[500]="D";
        umap[400]="CD";
        umap[100]="C";
        umap[90]="XC";
        umap[50]="L";
        umap[40]="XL";
        umap[10]="X";
        umap[9]="IX";
        umap[5]="V";
        umap[4]="IV";
        umap[1]="I";
        int ten=1;
        string ans="";
        while(num>0){
            int last=(num%10)*ten;
            if(umap.contains(last)){
                ans=umap[last]+ans;
            }else if(last<4*ten){
                for(int i=1;i<=last/ten;i++){
                    ans=umap[ten]+ans;
                }
            }else if(last<9*ten){
                for(int i=6;i<=last/ten;i++){
                    ans=umap[ten]+ans;
                }
                ans=umap[5*ten]+ans;
            }
            ten*=10;
            num/=10;
        }
        return ans;
    }
};