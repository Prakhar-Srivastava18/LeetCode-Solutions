int singleNumber(int* nums, int numsSize) {
    if(numsSize==1) return nums[0];
    int i, ans=nums[0];
    for(i=1;i<numsSize;i++){
        ans=ans^nums[i];
    }
    return ans;
}
