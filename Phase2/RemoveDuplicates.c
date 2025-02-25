#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0; 
	//This code is written by Anand Soni 
    int i = 0; 

    for (int j = 1; j < numsSize; j++) {
        if (nums[j] != nums[i]) {
            i++; 
            nums[i] = nums[j]; 
        }
    }

    return i + 1; 
}

int main() {
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, numsSize);

    printf("Unique Count: %d\n", k);
    printf("Modified Array: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

