int comp(const void *a, const void *b){
    int valA=*(const int*)a;
    int valB=*(const int*)b;
    if (valA>valB) return 1;
    if (valA<valB) return -1;
    return 0;
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
long long gcdSum(int* nums, int numsSize) {
    int k, m=nums[0];
    long long  sum=0;
    for(k=0;k<numsSize;k++){
        if(nums[k]>m) m=nums[k];
        nums[k] = gcd(nums[k],m);
    }
qsort(nums,numsSize,sizeof(int),comp);
int a=numsSize/2;
for(k=0;k<a;k++){
    sum+=gcd(nums[k],nums[numsSize-k-1]);
}
return sum;
}
