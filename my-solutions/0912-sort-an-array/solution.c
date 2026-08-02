/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void merge(int *nums, int l, int m, int r, int *temp){
    int i=l, j=m+1, k=l;
    while(i<=m && j<=r){
        if(nums[i]<=nums[j]){
            temp[k++]=nums[i++];
        }
        else temp[k++]=nums[j++];
    }
    while(i<=m){
        temp[k++]=nums[i++];
    }
    while(j<=r){
        temp[k++]=nums[j++];
    }
    for(i=l;i<=r;i++){
        nums[i]=temp[i];
    }
}

void mergesort(int *nums, int l, int r, int *temp){
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(nums, l, m, temp);
        mergesort(nums, m+1, r, temp);
        merge(nums, l, m, r, temp);
    }
}
int* sortArray(int* nums, int numsSize, int* returnSize) {
    int *temp=malloc(numsSize*sizeof(int));
    mergesort(nums,0,numsSize-1,temp);
    *returnSize=numsSize;
    return nums;
}
