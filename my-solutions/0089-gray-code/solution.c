/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* grayCode(int n, int* returnSize) {
    int a=1<<n;
    *returnSize=a;
    int* arr=(int*)malloc(a*sizeof(int));
    int i=0;
    while(i<a){
        arr[i]=i ^ (i>>1);
        i++;
    }
    return arr;
}
