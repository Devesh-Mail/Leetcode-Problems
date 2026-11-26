bool canAliceWin(int n) {
    int flag=0;
    int c=10;
    while(n>0){
        flag=1-flag;
        n-=c;
        c--;
    }
    if(n<0){
        return(flag==0);
    }
    return (flag==1);
}