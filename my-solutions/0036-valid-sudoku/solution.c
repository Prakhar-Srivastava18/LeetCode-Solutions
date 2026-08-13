bool isValidSudoku(char** board, int boardSize, int* boardColSize) { 
    for(int i=0;i<boardSize;i++){
        int count1[10]={0};
        int count2[10]={0};
        for(int j=0;j<9;j++){
            if(board[i][j]!='.'){
                int num1=board[i][j]-'0';
                if(count1[num1]>0) return false;
                count1[num1]++;
            }
            if(board[j][i]!='.'){
                int num2=board[j][i]-'0';
                if(count2[num2]>0) return false;
                count2[num2]++;
            }
        }
    }
    for(int row=0;row<9;row += 3){
        for(int col=0;col<9;col += 3){
            int count[10] = {0}; 
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(board[row+i][col+j]!='.'){
                        int num=board[row+i][col+j]-'0';
                        if(count[num]>0) return false; 
                        count[num]++;
                    }
                }
            }
        }
    }
    return true;
}
