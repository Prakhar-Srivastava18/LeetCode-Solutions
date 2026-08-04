int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    if(numsSize == 0){
        *returnSize = 0;
        return NULL;
    }
    qsort(nums, numsSize, sizeof(int), compare);
    int min = nums[0];
    int max = nums[numsSize-1];
    int size = max-min+1;
    int maxSize = size-numsSize;
    int allocSize = (maxSize > 0) ? maxSize : 1;
    int* arr = malloc(allocSize * sizeof(int));
    int temp = 0;
    for(int i = min + 1; i < max; i++){
        if(binarySearch(nums, numsSize, i) == -1){
            arr[temp++] = i;
        }
    }
    *returnSize = temp;
    if (temp > 0) {
        arr = realloc(arr, temp * sizeof(int));
    }
    return arr;
}

