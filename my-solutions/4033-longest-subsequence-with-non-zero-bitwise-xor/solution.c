int longestSubsequence(int* nums, int numsSize) {
    long long a=0, xor=0;
    for(int i=0;i<numsSize;i++){
        xor=xor^nums[i];
        a+=nums[i];
    }
    if(!a) return 0;
    if(a!=0 && xor==0) return numsSize-1;
    return numsSize;
}
