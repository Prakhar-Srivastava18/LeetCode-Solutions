long long countCommas(long long n) {
    if(n<1000) return 0;
    long long c=0;
    long long a=1000;
    while(n>=a){
        c+=(n-a+1);
        a*=1000; 
    }  
    return c;
}
