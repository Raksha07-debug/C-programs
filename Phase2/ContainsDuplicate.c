#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
// check if contain duplicate
bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare); 

    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true; 
        }
    }
    
    return false; 
}
// Example usage
int main() {
    int nums[] = {1, 2, 3, 1};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    printf("%s\n", containsDuplicate(nums, size) ? "true" : "false");
    
    return 0;
}

