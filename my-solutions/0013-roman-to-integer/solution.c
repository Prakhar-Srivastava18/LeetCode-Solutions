int romanToInt(char* s){
    int arr[256] = {0};
    arr['I'] = 1; arr['V'] = 5; arr['X'] = 10; arr['L'] = 50;
    arr['C'] = 100; arr['D'] = 500; arr['M'] = 1000;
    int total = 0;
    for(int i=0;s[i] !='\0';i++){
        if(s[i+1] != '\0' && arr[s[i]] < arr[s[i+1]]){
            total -= arr[s[i]];
        }
        else total += arr[s[i]];
    }
    return total;
}

