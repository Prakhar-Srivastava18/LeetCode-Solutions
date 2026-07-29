/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* prefixesDivBy5(int* nums, int numsSize, int* returnSize) {
    bool *ans=malloc(numsSize*sizeof(bool));
    long long remainder=0;
    for(int i=0;i<numsSize;i++){
        remainder=(remainder*2 + nums[i])%5;
        ans[i]=(remainder==0);
    }
    *returnSize=numsSize;
    return ans;
}
