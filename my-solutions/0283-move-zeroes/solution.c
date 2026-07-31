void moveZeroes(int* nums, int numsSize) {
    int i, j, n=numsSize-1;
    for(i=0,j=1;i<n,j<numsSize;i++,j++){
        if(nums[i]==0 && nums[j]==0) i--;
        else if(nums[i]==0) {
            nums[i]=nums[j];
            nums[j]=0;
        }
    }
}
