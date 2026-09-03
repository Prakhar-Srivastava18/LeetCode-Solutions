bool uniformArray(int* nums1, int nums1Size) {
    int min=nums1[0];
    int a=0;
    for(int i=0;i<nums1Size;i++){
        if(nums1[i]<min) min=nums1[i];
        if((nums1[i]&1)==1) a=1;
    }
    if((min&1)==0 && a==1) return false;
    return true;
}
