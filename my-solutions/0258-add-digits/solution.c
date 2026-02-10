int addDigits(int num) {
    int a=0, x=0;
    if(num<10) return num;
    while(num>0){
        if(num<10){
            a+=num;
            num=num/10;
            if(a>=10){
                num=a;
                a=0;
            }
        }
        else{
            x=num%10;
            a+=x;
            num=num/10;
        }
    }
    return a;
}
