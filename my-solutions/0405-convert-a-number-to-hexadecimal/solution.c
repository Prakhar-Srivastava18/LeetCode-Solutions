char* toHex(int num) {
    char* str=malloc(9*sizeof(char));
    str[0]='\0';
    int a;
    unsigned int n = num;
    if (num >= 0 && num < 10) {
    str[0] = num + '0'; 
    str[1] = '\0';
    return str;
}
    if(num>=10 && num<16){
        if(num==10) return strcat(str,"a");
        if(num==11) return strcat(str,"b");
        if(num==12) return strcat(str,"c");
        if(num==13) return strcat(str,"d");
        if(num==14) return strcat(str,"e");
        if(num==15) return strcat(str,"f");
    }
    int idx=0;
    while(n>0){
        a=n%16;
        n/=16;
        if(a<10){
            str[idx++] = a + '0'; 
        }
        else {
            str[idx++] = a + 87; 
        }
        str[idx] = '\0';
    }
    int i=strlen(str);
    for (int j = 0; j < i/2; j++) {
        char temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }
    return str;
}
