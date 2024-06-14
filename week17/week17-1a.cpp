//week17-2a.cpp 
void sortColors(int* nums, int numsSize) {
    for(int i=0; i<numsSize; i++){ //左手i
        for(int j=i+1; j<numsSize; j++){//右手j
            if(nums[i] > nums[j]){//大小不對,換
                int temp = nums[i]; //交換
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }

    }
}