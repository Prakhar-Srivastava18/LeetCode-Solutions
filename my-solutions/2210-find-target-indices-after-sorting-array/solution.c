/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void *a, const void *b){
    int valA=*(const int*)a;
    int valB=*(const int*)b;
    if (valA>valB) return 1;
    else if(valA<valB) return -1;
    return 0;
}
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int count=0,temp=0;
    qsort(nums,numsSize,sizeof(int),cmp);
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target) count++;
    }
    int *ans=malloc(count*sizeof(int));
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            ans[temp++]=i;
        }
    }
    *returnSize=count;
    return ans;
}
