void sortColors(int* nums, int numsSize) {
    int red=0, white=0, blue=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0) red++;
        else if(nums[i]==1) white++;
        else blue++;
    }
    for(int i=0;i<red;i++){
        nums[i]=0;
    }
    int n1=red+white;
    for(int i=red;i<n1;i++){
        nums[i]=1;
    }
    for(int i=n1;i<numsSize;i++){
        nums[i]=2;
    }
}
