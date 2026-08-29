/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    int n=1<<numsSize;
    *returnSize=n;
    int** ans=(int**)malloc(n*sizeof(int*));
    *returnColumnSizes=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<numsSize;j++){
            if((i>>j)&1) count++;
        }
        (*returnColumnSizes)[i]=count;
        ans[i]=(int*)malloc(count*sizeof(int));
        int idx=0;
        for(int j=0;j<numsSize;j++){
            if((i>>j)&1){
                ans[i][idx++]=nums[j];
            }
        }
    }
    return ans;
}
