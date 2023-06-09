#include <stdio.h>

int maxSubArray(int* nums, int numsSize) {
    int c = nums[0];
    int e = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if(c<0)
        {
            c=nums[i];
        }
        else
        {
            c+=nums[i];
        }
        if(c>e)
        {
            e=c;
        }
    }

    return e;
}

int main() {
    int nums[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(nums) / sizeof(nums[0]);

    int maxSum = maxSubArray(nums, size);

    printf("The sum of the subarray with the largest sum is: %d\n", maxSum);

    return 0;
}
