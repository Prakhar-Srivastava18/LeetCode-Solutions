char* addBinary(char* a, char* b) {
    int n1 = strlen(a);
    int n2 = strlen(b);
    int max_len = n1 > n2 ? n1 : n2;
    char* ans = (char*)malloc(max_len + 2);
    if (!ans) return NULL;
    int i = n1-1;
    int j = n2-1;
    int carry = 0;
    int k = max_len;
    ans[k+1] = '\0';
    while (i >= 0 || j >= 0 || carry) {
        int bit_a = (i >= 0) ? (a[i--]-'0') : 0;
        int bit_b = (j >= 0) ? (b[j--]-'0') : 0;
        ans[k--] = (bit_a^bit_b^carry) + '0';
        carry = (bit_a & bit_b) | (carry & (bit_a ^ bit_b));
    }
    return &ans[k + 1];
}

