int digit_product(int n){
    int a=n;
    int product=1;
    while(a>0){
        product*=a%10;
        a=a/10;
    }
    return product;
}
int smallestNumber(int n, int t) {
    if(n==10 || n==20 ||n==30 || n==40 || n==50 || n==60 || n==70 || n==80 || n==90 || n==100) return n;
    for(int i=n;i<=100;i++){
        int product=digit_product(i);
        if(product%t == 0) {
            return i;
        }
    }
    return 0;
}
