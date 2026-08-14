int maximumLengthSubstring(char* s) {
    int n=strlen(s);
    int l=0, r=0, max=0;
    int count[26]={0};
    for(r=0;r<n;r++){
        int num=s[r]-'a';
        count[num]++;
        while(count[num]>2){
            count[s[l]-'a']--;
            l++;
        }
        int len=r-l+1;
        if(len > max) max=len;
    }
    return max;
}
