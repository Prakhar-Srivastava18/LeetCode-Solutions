int cmp(const void* a, const void* b){
    int x=*(const int*)a;
    int y=*(const int*)b;
    return (x>y)-(x<y); 
}
int thirdMax(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    if(numsSize<3) return nums[numsSize-1];
    int max=1;
    for(int i=numsSize-1;i>0;i--){
        if((nums[i]^nums[i-1])!=0) max++;
        if(max==3){
            return nums[i-1];
        }
    }
    return nums[numsSize-1];
}
