/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int binary_search(int arr[], int size, int target, int findFirst) {
    int low=0;
    int high=size-1;
    int result=-1;
    while (low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]==target){
            result = mid;
            if(findFirst) high=mid-1;
            else low=mid+1;
        } 
        else if (arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return result;
}
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int *arr=malloc(2*sizeof(int));
    arr[0]=arr[1]=-1;
    *returnSize=2;
    if(numsSize==0) return arr;
    arr[0]=binary_search(nums,numsSize,target,1);
    arr[1]=binary_search(nums,numsSize,target,0);
    return arr;
}
