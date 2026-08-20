/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* resultArray(int* nums, int numsSize, int* returnSize) {
    int *arr1=malloc(numsSize*sizeof(int));
    int *arr2=malloc(numsSize*sizeof(int));
    int *ans=malloc(numsSize*sizeof(int));
    int n=numsSize-2;
    arr1[0]=nums[0];
    arr2[0]=nums[1];
    int i=0, j=0, k=2;
    while(n>0){
        if(arr1[i]>arr2[j]){
            arr1[++i]=nums[k++];
            n--;
        }
        else{
            arr2[++j]=nums[k++];
            n--;
        }
    }
    for(int a=0;a<=i;a++){
        ans[a]=arr1[a];
    }
    for(int b=0;b<=j;b++){
        ans[i+1+b]=arr2[b];
    }
    free(arr1);
    free(arr2);
    *returnSize=numsSize;
    return ans;
}
