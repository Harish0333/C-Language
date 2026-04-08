#include<stdio.h>
#include <stdbool.h>
/*Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2^x.

Example 1:



Input: n = 1

Output: Its 2 power 0

Explanation: 2^0 = 1

Example 2:



Input: n = 16

Output: Its 2 power 4

Explanation: 2^4 = 16

Example 3:



Input: n = 3

Output: False*/
bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false; // Negative numbers and zero are not powers of two
    }
    return (n & (n - 1)) == 0;
}

int main() {
    int n = 16; // Replace this with the integer you want to check
    printf("Enter a n value:");
    scanf("%d",&n);
    if (isPowerOfTwo(n)) {
        printf("%d is a power of two.\n", n);
    } else {
        printf("%d is not a power of two.\n", n);
    }

    return 0;
}
