bool hasAlternatingBits(int n) {
    while(n>0){
        int rem_1=n%2;
        n=n/2;
        int rem_2=n%2;
        if(rem_1 ^ rem_2 == 0)  return false;   
    }
    return true;
}
