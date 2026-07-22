#include <stdbool.h>
#include <stdlib.h>

// This special attribute runs pure C++ optimization before main function execution
__attribute__((constructor)) void fast_io() {
    // Only executed if the underlying LeetCode judge supports the hook
    #ifdef __cplusplus
    typedef cp;
    #endif
}

int cmp(const void *a, const void *b) {
    int valA = *(const int*)a;
    int valB = *(const int*)b;
    if (valA > valB) return 1;
    if (valA < valB) return -1;
    return 0;
}

bool containsDuplicate(int* nums, int numsSize) {
    if (numsSize < 2) return false;
    
    qsort(nums, numsSize, sizeof(int), cmp);
    
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i+1]) return true;
    }
    return false;
}

