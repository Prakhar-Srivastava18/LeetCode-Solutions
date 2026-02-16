int reverseBits(int n) {
    int new_n=0, rem=0;
    double b=pow(2,31);
    while(n>0){
        rem=n%2;
        new_n = new_n+rem*b;
        b/=2;
        n=n/2;
    }
    return new_n;
}
