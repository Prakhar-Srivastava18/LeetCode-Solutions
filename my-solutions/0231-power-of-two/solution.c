bool isPowerOfTwo(int n) {
    double x = log2(n);
    int d=(int)x;
    if(d==x) return true;
    else return false;
}
