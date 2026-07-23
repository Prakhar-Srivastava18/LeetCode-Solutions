/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **ans=malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        int b=i+1;
        ans[i] = malloc(9);
        if((b%3==0) && (b%5==0)) sprintf(ans[i], "FizzBuzz");
        else if(b%3==0) sprintf(ans[i], "Fizz");
        else if(b%5==0) sprintf(ans[i], "Buzz");
        else sprintf(ans[i], "%d", b);
    }
    *returnSize=n;
    return ans;
}
