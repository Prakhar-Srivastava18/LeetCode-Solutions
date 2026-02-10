int missingNumber(int* nums, int numsSize) {
    int sum=0,total=0;
    total=(numsSize*(numsSize+1))/2;
    for(int i=0;i<numsSize;i++){
        sum+=nums[i];
    }
    int missing=total-sum;
    return missing;
}
