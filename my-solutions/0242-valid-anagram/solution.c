int compareChars(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}
void sort(char* str) {
    if (str == NULL) return;
    int len = strlen(str);
    qsort(str, len, sizeof(char), compareChars);
}

bool isAnagram(char* s, char* t) {
    int s_len=strlen(s);
    int t_len=strlen(t);
    if(s_len!=t_len) return false;
    sort(s);
    sort(t);
    for(int i=0;i<s_len;i++){
        if(s[i]!=t[i]) return false;
    }
    return true;
}
