bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if(matrixSize==0 || matrixColSize[0]==0) return false;
    int row=matrixSize;
    int col=matrixColSize[0];
    if(target<matrix[0][0] || target>matrix[row-1][col-1]) return false;
    int low=0, high=(row*col)-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int mid_r=mid/col;
        int mid_c=mid%col;
        int val=matrix[mid_r][mid_c];
        if(val==target) return true;
        else if(val>target) high=mid-1;
        else low=mid+1;
    }
    return false;
}
