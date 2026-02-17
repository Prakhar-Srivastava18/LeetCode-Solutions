/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int k=0, l=0;
    nums1Size > nums2Size ? (k = nums2Size) : (k = nums1Size);
    int* arr;
    arr = (int*)malloc(k*sizeof(int));
    for(int i=0;i<nums1Size;i++){
        for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                int check=1;
                for(int m=0;m<l;m++){
                    if(arr[m]==nums1[i]){
                        check=0;
                        break;
                    }
                }
                if(check){
                    arr[l++]=nums2[j];
                    break;
                }
            }
        }
    }
    *returnSize = l;
    return arr;
}
