#include <limits.h>
int reverse(int x){
    int n, reverse_digit=0;
    while(x!=0){
        n=x%10;
        
        
    
    if (reverse_digit > INT_MAX / 10 || 
    (reverse_digit == INT_MAX / 10 && n > 7)) return 0;
if (reverse_digit < INT_MIN / 10 || 
    (reverse_digit == INT_MIN / 10 && n < -8)) return 0;
            
        reverse_digit = reverse_digit * 10 + n;
        x=x/10;
    }
    return reverse_digit;
}

