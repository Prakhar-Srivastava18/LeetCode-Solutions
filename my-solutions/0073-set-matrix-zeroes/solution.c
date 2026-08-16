void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int r=matrixSize;
    int c=matrixColSize[0];
    int first_r=0;
    int first_c=0;
    for(int j=0;j<c;j++){
        if(matrix[0][j]==0){
            first_r=1;
            break;
        }
    }
    for(int i=0;i<r;i++){
        if(matrix[i][0]==0){
            first_c=1;
        }
    }
    for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
    }
    for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }
    if(first_r){
        for(int j=0;j<c;j++){
            matrix[0][j]=0;
        }
    }
    if(first_c){
        for(int i=0;i<r;i++){
            matrix[i][0]=0;
        }
    }
}
