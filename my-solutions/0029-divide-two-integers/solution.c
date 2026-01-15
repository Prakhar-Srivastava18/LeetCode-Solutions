int divide(int dividend, int divisor) {
if(dividend==divisor) return 1;
if (dividend == INT_MIN && divisor == -1) return INT_MAX;
if(divisor==1) return dividend;
if(dividend==0) return 0;
long long int sign = 1,ans=0;

if(dividend>0 ^ divisor>0) sign=0;
long long int d=llabs((long long)divisor);

long long int n=llabs((long long)dividend);
while(n>=d){
    int count=0;
    while(n>=(d<<(count+1))){
        count++;
        
    }
    ans+= 1<<count;
    n=n-(d<<count);
} 
if(ans>INT_MAX && sign==1) return INT_MAX;
if(ans>INT_MAX && sign==0) return INT_MIN;
if(sign) return ans;
else return -ans;  
}
