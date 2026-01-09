bool isPalindrome(int x) {
    if((x/1)<0){
        return false;
    }
    int n=x;
    long int reverse=0;
    while(n>0){
        reverse += (n%10);
        reverse*=10;
        n=n/10;
    }
    reverse=reverse/10;
    if(x==reverse) return true;
    else return false;
}
