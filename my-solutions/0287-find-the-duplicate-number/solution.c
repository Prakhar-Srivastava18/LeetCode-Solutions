int asc_sort(const void* a, const void* b){
    int val_a = *(int*)a;
    int val_b = *(int*)b;
    return (val_a > val_b) - (val_a < val_b);
}
int findDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), asc_sort);
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]==nums[i+1]){
            return nums[i];
        }
    }
return -1;
}
