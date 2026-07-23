int findSpecialInteger(int* arr, int arrSize) {
    int b=arrSize/4;
    int freq[100001]={0};
    for (int i=0;i<arrSize;i++) {
        freq[arr[i]]++;
    }
    for(int i=0;i<arrSize;i++){
        if(freq[arr[i]]>b) return arr[i];
    }
    return -1;
}
