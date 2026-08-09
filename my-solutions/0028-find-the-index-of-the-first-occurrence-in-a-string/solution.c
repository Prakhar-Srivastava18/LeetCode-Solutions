int strStr(char* haystack, char* needle) {
    int n1=strlen(haystack);
    int n2=strlen(needle);
    int n=n1-n2;
    for(int i=0;i<=n;i++){
        int j;
        for(j=0;j<n2;j++){
            if(haystack[i+j]!=needle[j]) break;
        }
        if(j==n2) return i;
    }
    return -1;
}
