int gcd(int a, int b){
    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int findGCD(int* nums, int numsSize) {
    if(numsSize==1) return nums[0];
    int i, min=nums[0], max=nums[0];
    for(i=0;i<numsSize;i++){
        if(nums[i]>max) max=nums[i];
        if(nums[i]<min) min=nums[i];
    }
    return gcd(min,max);
}
