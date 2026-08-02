char* toLowerCase(char* s) {
   int i=0;
   while(s[i]!='\0'){
    s[i]=tolower(s[i]);
    i++;
   } 
   return s;
}
