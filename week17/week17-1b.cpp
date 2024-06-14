//week17-2b.cpp 
void sortColors(int* nums, int numsSize) {
    for(int k=0; k<numsSize-1; k++){ //左手i
        for(int i=0; i<numsSize-1; i++){//右手j
            if(nums[i] > nums[i+1]){//大小不對,換
                int temp = nums[i]; //交換
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
        }

    }
}