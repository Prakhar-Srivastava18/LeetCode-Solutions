char* convertToTitle(int columnNumber) {
    char* arr=malloc(8*sizeof(char));
    int index=0;
    while(columnNumber>0){
        columnNumber--;
        int r=columnNumber%26;
        arr[index++]=r+'A';
        columnNumber/=26;
    }
    arr[index]='\0';
    int start=0;
    int end=index-1;
    while(start<=end){
        char temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    return arr;
}
