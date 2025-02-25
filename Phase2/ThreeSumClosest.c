#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int threeSumClosest(int* nums, int numsSize, int target) {

    qsort(nums, numsSize, sizeof(int), compare);

    int closestSum = INT_MAX;
    int minDiff = INT_MAX;

    for (int i = 0; i < numsSize - 2; i++) {
        int left = i + 1, right = numsSize - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            int diff = abs(sum - target);

            
            if (diff < minDiff) {
                minDiff = diff;
                closestSum = sum;
        }
            if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return closestSum;
}

// Example usage
int main() {
    int nums1[] = {-1, 2, 1, -4};
    int target1 = 1;
    printf("%d\n", threeSumClosest(nums1, 4, target1)); 

    int nums2[] = {0, 0, 0};
    int target2 = 1;
    printf("%d\n", threeSumClosest(nums2, 3, target2)); 

    return 0;
}

