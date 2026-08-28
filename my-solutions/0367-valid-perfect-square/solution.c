bool isPerfectSquare(int num) {
    if(num<0) return false;
    if(num==1 || num==0) return true;
    int left=1, right=num;
    while(left<=right){
        int mid=left+(right-left)/2;
        long long mid_sq=(long long)mid*mid;
        if(mid_sq==num) return true;
        else if(mid_sq<num) left=mid+1;
        else right=mid-1;
    }
    return false;
}
