int maxProduct(int* nums, int numsSize) {
    int i, temp=0, max1=0, max2=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]>max1){
        max1=nums[i];
        temp=i;
        }
    }
    for(i=0;i<numsSize;i++){
        if(i!=temp && nums[i]>max2) max2=nums[i];
    }
    return (max1-1)*(max2-1);
}
