void shift(char *s, int n){
    int i, a=n-1;
    char temp=s[0];;
    for(i=0;i<a;i++){
        s[i]=s[i+1];
    }
    s[n-1]=temp;
}
bool rotateString(char* s, char* goal) {
    int i, n=strlen(s);
    char *str=malloc((n+1)*sizeof(char));
    for(i=0;i<n;i++){
        str[i]=s[i];
    }
    str[n]='\0';
    for(i=0;i<n;i++){
        if(strcmp(str, goal)==0){
            free(str);
            return true;
        }
        shift(str, n);
    }
    free(str);
    return false;
}
