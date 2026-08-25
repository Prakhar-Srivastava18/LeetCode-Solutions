int cmp(const void* a, const void* b){
    int valA=*(int*)a;
    int valB=*(int*)b;
    return valA-valB;
}
int missingMultiple(int* nums, int numsSize, int k) {
    if(numsSize==0) return k;
    qsort(nums, numsSize, sizeof(int), cmp);
    int temp=1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>temp*k) break;
        if(nums[i]==temp*k){
            temp++;
        }
    }
    return temp*k;
}
