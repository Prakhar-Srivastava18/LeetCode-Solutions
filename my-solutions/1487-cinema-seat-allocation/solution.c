int cmp(const void* x, const void* y){
    int* rowA = *(int**)x;
    int* rowB = *(int**)y;
    return rowA[0] - rowB[0];
}
int maxNumberOfFamilies(int n, int** reservedSeats, int reservedSeatsSize, int* reservedSeatsColSize) {
    qsort(reservedSeats,reservedSeatsSize,sizeof(int*),cmp);
    int row=reservedSeatsSize;
    int grp=0;
    int uniquerow=0;
    for(int i=0;i<row;){
        int currentrow=reservedSeats[i][0];
        uniquerow++;
        int col1=0, col2=0, col3=0;
        for(;i<row && currentrow==reservedSeats[i][0];i++){
            int j=reservedSeats[i][1];
            if(j>=2 && j<=5) col1=1;
            if(j>=4 && j<=7) col2=1;
            if(j>=6 && j<=9) col3=1;
        }
        if(!col1 && !col3) grp+=2;
        else if(!col1 || !col2 || !col3) grp++;
    }
    grp+=(n-uniquerow)*2;
    return grp;
}
