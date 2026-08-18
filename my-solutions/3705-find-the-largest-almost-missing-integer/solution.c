int largestInteger(int* nums, int numsSize, int k) {
    int freq[51]={0};
    int max=nums[0];
    for(int i=0;i<numsSize;i++){
        freq[nums[i]]++;
        if(nums[i]>max) max=nums[i];
    }
    if(k==numsSize) return max;
    int max2=nums[0];
    int t=-1;
    for(int i=0;i<51;i++){
        if(i>t && freq[i]==1) t=i;
    }
    if(k==1) return t;
    int a=freq[nums[0]];
    int b=freq[nums[numsSize-1]];
    if(a>1 && b>1) return -1; 
    if(a==1 && b==1) return (nums[0]>nums[numsSize-1]) ? nums[0] : nums[numsSize-1];
    if(a>1 && b==1) return nums[numsSize-1];
    return nums[0];
}
