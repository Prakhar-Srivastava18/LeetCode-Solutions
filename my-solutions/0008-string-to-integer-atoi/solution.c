#include <limits.h>
int myAtoi(char* s) {
    int i=0;
    int sign=1;
    int result=0;
    while(s[i]==32 || (s[i]>=9 && s[i]<=13)){
        i++;
    }
    if(s[i]=='-'){
        sign=-1;
        i++;
    }
    else if(s[i]=='+'){
        i++;
    }
    while(s[i]>='0' && s[i]<='9'){
        int digit = s[i]-'0';
        if(result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7))
        return (sign==1) ? INT_MAX : INT_MIN;
        result=result*10+digit;
        i++;
    }
    return (int)(result*sign);

}
