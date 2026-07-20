/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** shiftGrid(int** grid, int gridSize, int* gridColSize, int k, int* returnSize, int** returnColumnSizes) {
    int rows=gridSize;
    int cols=gridColSize[0];
    int N=rows*cols;
    k=k%N;
    *returnSize=rows;
    *returnColumnSizes =(int*)malloc(rows*sizeof(int));
    int **result=(int**)malloc(rows*sizeof(int*));
    for(int i=0;i<rows;i++){
        (*returnColumnSizes)[i]=cols;
        result[i]=(int*)malloc(cols*sizeof(int)); 
    }
    for(int r=0;r<rows;r++){
        for(int c=0;c<cols;c++){
            int old_1D=r*cols+c;
            int new_1D=(old_1D+k)%N;
            int new_r=new_1D/cols;
            int new_c=new_1D%cols;
            result[new_r][new_c]=grid[r][c];
        }
    }  
    return result;

}
