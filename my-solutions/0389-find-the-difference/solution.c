int ascii(char *str, int n){
    int i, ascii_val=0;
    for(i=0;i<n;i++){
        ascii_val+=str[i];
    }
    return ascii_val;
}

char findTheDifference(char* s, char* t) {
    int n1=strlen(s);
    int n2=strlen(t);
    int v1, v2;
    v1=ascii(s,n1);
    v2=ascii(t,n2);
    v1=v2-v1;
    return (char)v1;
}
