int scoreOfString(char* s) {
   int Sum=0;
   int n=strlen(s)-1;
   for(int i=0;i<n;i++){
      Sum+= abs(s[i] - s[i+1]);
      }
      return Sum;
}
