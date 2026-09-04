int firstStableIndex(int* nums, int numsSize, int k) {
    if(numsSize<=0) return -1;
    int max=nums[0];
    for(int i=0;i<numsSize;i++){
        if(nums[i]>max) max=nums[i];
        int min=nums[numsSize-1];
        for(int j=numsSize-1;j>=i;j--){
            if(nums[j]<min) min=nums[j];
        }
        if((max-min)<=k) return i;
    }
    return -1;
}
