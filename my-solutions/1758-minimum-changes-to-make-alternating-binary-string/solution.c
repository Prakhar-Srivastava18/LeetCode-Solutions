int minOperations(char* s) {
  int i=0, count=0, n=strlen(s);
  for(i;i<n-1;i++){
    if((s[i]^s[i+1])==0){
        count++;
        int a=s[i+1]-'0';
        s[i+1] = (a==0) ? '1' : '0';
    }
  } 
  return (count < (n - count)) ? count : (n - count);
}
