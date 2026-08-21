void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int row=matrixSize;
    int col=matrixSize;
    for(int i=0;i<row;i++){
        for(int j=i+1;j<col;j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(int i=0;i<row;i++){
        int start=0;
        int end=matrixSize-1;
        while(start<end){
            int temp=matrix[i][start];
            matrix[i][start]=matrix[i][end];
            matrix[i][end]=temp;
            start++;
            end--;
        }
    }
}
