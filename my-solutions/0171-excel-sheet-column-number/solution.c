int titleToNumber(char* columnTitle) {
    int ans=0;
    int i=0;
    while(columnTitle[i] != '\0'){
        ans=ans*26 + (columnTitle[i]-'A'+1);
        i++;
    }
    return ans;
}
