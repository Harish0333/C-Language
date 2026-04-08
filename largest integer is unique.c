#include <stdio.h>
/*You are given an integer array nums where the largest integer is unique.



Determine whether the largest element in the array is at least twice as much as every other number in the array. 

If it is, return the index of the largest element, or return -1 otherwise.



Example 1:



Input: nums = [3,6,1,0]

Output: The index of larger integer 6 is 1.

Explanation: 6 is the largest integer.

For every other number in the array x, 6 is at least twice as big as x.

The index of value 6 is 1, so we return 1.

Example 2:



Input: nums = [1,2,3,4]

Output: -1

Explanation: 4 is less than twice the value of 3, so we return -1.



*/
// Function to find the index of the largest element in the array
int findLargestIndex(int* nums, int numsSize) {
    int maxIndex = 0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > nums[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

// Function to check if the largest element is at least twice as large as every other element
int isLargestTwiceAsLarge(int* nums, int numsSize) {
    int maxIndex = findLargestIndex(nums, numsSize);
    for (int i = 0; i < numsSize; i++) {
        if (i != maxIndex && nums[maxIndex] < 2 * nums[i]) {
            return 0; // Not at least twice as large, return 0
        }
    }
    return 1; // Largest is at least twice as large, return 1
}

int main() {
    int nums[] = {3, 6, 1, 0};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    if (isLargestTwiceAsLarge(nums, numsSize)) {
        printf("The largest element is at least twice as large, and its
