int countNumbersWithUniqueDigits(int n) {
    if(n==0) return 1;
    if(n==1) return 10;
    int f=10, temp1=9, temp2=9;
    int i=2;
    while(i<=n){
        temp1*=temp2;
        f+=temp1;
        temp2--;
        i++;
    }
    return f;
}
