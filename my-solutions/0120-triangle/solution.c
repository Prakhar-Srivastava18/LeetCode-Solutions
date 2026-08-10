int minimumTotal(int** triangle, int triangleSize, int* triangleColSize) {
    for(int i=triangleSize-2;i>=0;i--){
        for(int j=0;j<triangleColSize[i];j++){
            int left=triangle[i+1][j];
            int right=triangle[i+1][j+1];
            int min=(left>=right)?right:left;
            triangle[i][j]+=min;
        }
    }
    return triangle[0][0];
}
