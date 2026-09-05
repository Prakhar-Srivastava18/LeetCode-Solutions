int firstStableIndex(int* nums, int numsSize, int k) {
    int* prefix = malloc(numsSize*sizeof(int));
    int* suffix = malloc(numsSize*sizeof(int));
    int max=nums[0];
    int min=nums[numsSize-1];
    for(int i=0;i<numsSize;i++){
        if(nums[i]>max) max=nums[i];
        prefix[i]=max;
    }
    for(int j=numsSize-1;j>=0;j--){
        if(nums[j]<min) min=nums[j];
        suffix[j]=min;
    }
    for(int i=0;i<numsSize;i++){
        if((prefix[i]-suffix[i])<=k){
            free(suffix);
            free(prefix);
            return i;
        }
    }
    free(suffix);
    free(prefix);
    return -1;
}
