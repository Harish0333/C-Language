#include <stdio.h>
/*Given a binary array nums, return the count of maximum number of consecutive 1's in the array.



Example 1:



Input: nums = [1,1,0,1,1,1]

Output: The maximum number of consecutive 1s is 3.

Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

Example 2:



Input: nums = [1,0,1,1,0,1]

Output: The maximum number of consecutive 1s is 2.*/
int findMaxConsecutiveOnes(int nums[], int size) {
    int maxCount = 0;
    int currentCount = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == 1) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
            currentCount = 0;
        }
    }
    if (currentCount > maxCount) {
        maxCount = currentCount;
    }
    return maxCount;
}
int main() 
{
    int nums[100],i,n;
    printf("Enter thes size of array:");
    scanf("%d",&n);
    printf("Enter the nums=");
    for(i=0;i<n;i++)
    {
       scanf("%d",&nums[i]);  
    }
    int size = sizeof(nums) / sizeof(nums[0]);
    int maxConsecutiveOnes = findMaxConsecutiveOnes(nums, size);
    printf("Maximum  number of consecutive 1's count: %d\n", maxConsecutiveOnes);
    return 0;
}
