int minimumDeletions(int* nums, int numsSize) {
    if(numsSize==1 || numsSize==2) return numsSize;
    int min_idx=0, max_idx=0;
    int min=nums[0], max=nums[0];
    for(int i=1;i<numsSize;i++){
        if(nums[i]>max){
            max=nums[i];
            max_idx=i;
        }
        else if(nums[i]<min){
            min=nums[i];
            min_idx=i;
        }
    }
    int left_idx = (min_idx < max_idx) ? min_idx : max_idx;
    int right_idx = (min_idx > max_idx) ? min_idx : max_idx;

    int del_front=right_idx+1;
    int del_back=numsSize-left_idx;
    int del_both=(left_idx+1)+(numsSize-right_idx);

    int min_del=del_front;
    if (del_back<min_del) min_del=del_back;
    if (del_both<min_del) min_del=del_both;

    return min_del;
}
