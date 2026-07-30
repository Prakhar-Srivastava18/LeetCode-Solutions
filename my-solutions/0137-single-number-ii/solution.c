int cmp(const void *a, const void *b){
    int valA=*(const int*)a;
    int valB=*(const int*)b;
    if(valA>valB) return 1;
    else if(valA<valB) return -1;
    return 0;
}

int singleNumber(int* nums, int numsSize) {
    if(numsSize==1) return nums[0];
    qsort(nums,numsSize,sizeof(int),cmp);
    int n= numsSize-1;
    for(int i=0;i<n;i+=3){
        if(nums[i]!=nums[i+1]){
            return nums[i];
        }
    }
    return nums[n];
}
