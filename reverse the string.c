#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*Given a string s,   according to the following rules:



All the characters that are not English letters remain in the same position.

All the English letters (lowercase or uppercase) should be reversed.

Return s after reversing it.



Example 1:



Input: s = "ab-cd"

Output: "dc-ba"

Example 2:



Input: s = "a-bC-dEf-ghIj"

Output: "j-Ih-gfE-dCba"

Example 3:



Input: s = "Test1ng-Leet=code-Q!"

Output: "Qedo1ct-eeLg=ntse-T!"

*/
// Function to reverse the English letters in a string
void reverseEnglishLetters(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        // Skip non-English letters from the left
        while (left < right && !isalpha(s[left])) {
            left++;
        }

        // Skip non-English letters from the right
        while (left < right && !isalpha(s[right])) {
            right--;
        }

        // Swap the English letters
        if (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
}

// Function to reverse a string according to specified rules
void reverseString(char* s) {
    reverseEnglishLetters(s);
}

int main() {
    char s[] = "Hello, World!";
    printf("Original string: %s\n", s);

    reverseString(s);

    printf("Reversed string: %s\n", s);

    return 0;
}
