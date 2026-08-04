unsigned long long calculate_binomial(int i, int j){
    int terms = (i < j) ? i : j; 
    unsigned long long result = 1;

    for (int k = 1;k<=terms;k++){
        result=result*(i+j-terms+k)/k;
    }
    return result;
}

int climbStairs(int n) {
    int sum=1;
    int a=n-2;
    int b=n/2;
    if(n==2 || n==1 || n==0) return n;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            if(i+2*j > n) break;
            if(i+2*j == n){
                sum+=calculate_binomial(i,j);
                break;
            }
        }
    }
    sum=(n%2==0) ? ++sum : sum ;
    return sum;
}
