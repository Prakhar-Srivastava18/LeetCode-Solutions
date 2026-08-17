bool isPalindrome(int x) {
    if(x<0) return 0;
    long reverse=0;
    int temp=x;
    while(temp>0){
        int a=temp%10;
        reverse=reverse*10+a;
        temp/=10;
    }
    return reverse==x;
}
