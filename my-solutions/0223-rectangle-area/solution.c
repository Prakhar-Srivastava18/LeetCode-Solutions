int max(int a, int b){
    return ((a>b)?a:b);
}
int min(int a, int b){
    return ((a<b)?a:b);
}
int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
    int A1=0, A2=0, L1=0, L2=0, B1=0, B2=0;
    L1=abs(ax2-ax1);
    L2=abs(bx2-bx1);
    B1=abs(ay2-ay1);
    B2=abs(by2-by1);
    A1=L1*B1;
    A2=L2*B2;
    int overlap_L=min(ax2,bx2)-max(ax1,bx1);
    int overlap_B=min(ay2,by2)-max(ay1,by1);
    int overlap_A=0;
    if(overlap_L>0 && overlap_B>0){
        overlap_A=overlap_L*overlap_B;
    }
    return A1+A2-overlap_A;
}
