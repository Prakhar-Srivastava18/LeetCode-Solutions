/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize){
    int i;
    int *ans=malloc((n+1)*sizeof(int));
    ans[0]=0;
    for(int i=0;i<=n;i++){
        ans[i]=ans[i>>1]+(i&1);
    }
    *returnSize=n+1;
    return ans;
}
