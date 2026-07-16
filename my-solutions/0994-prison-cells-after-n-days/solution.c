/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* prisonAfterNDays(int* cells, int cellsSize, int n, int* returnSize) {
    int i, j;
    n = (n-1)%14+1;
    int *arr = malloc(cellsSize*sizeof(int));
    int a=cellsSize-1;
    arr[0]=0;
    arr[a]=0;
    for(i=0;i<n;i++){
        int temp=cells[0];
        for(j=1;j<a;j++){
            if(temp==cells[j+1]){
                temp=cells[j];
                arr[j]=1;
            }
            else {
                temp=cells[j];
                arr[j]=0;
            }
        }
        for(j=0;j<cellsSize;j++){
            cells[j]=arr[j];
        }
    }
    *returnSize=cellsSize;
    return arr;
}
