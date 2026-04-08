#include <stdio.h>
/*You are given an array of characters letters that is sorted in non-decreasing order, and a character target. 

There are at least two different characters in letters.

Return the smallest character in letters that is lexicographically greater than target. If such a character does 

not exist, return the first character in letters.



Example 1:



Input: letters = ["c","f","j"], target = "a"

Output: "c"

Explanation: The smallest character that is lexicographically greater than 'a' in letters is 'c'.

Example 2:



Input: letters = ["c","f","j"], target = "c"

Output: "f"

Explanation: The smallest character that is lexicographically greater than 'c' in letters is 'f'.

Example 3:



Input: letters = ["x","x","y","y"], target = "z"

Output: "x"

Explanation: There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].




*/
char nextGreatestLetter(char* letters, int lettersSize, char target)
{
    for (int i = 0; i < lettersSize; i++) 
    {
        if (letters[i] > target) 
        {
            return letters[i];
        }
    }
    return letters[0];
}

int main() 
{
    char letters[100];
    char target[10];
    printf("Enter letters=");
    fgets(letters,100,stdin);
    printf("target=");
    scanf("%c",target);
    int lettersSize = sizeof(letters) / sizeof(letters[0]);
    char result = nextGreatestLetter(letters, lettersSize, target);
    printf("The smallest character greater than %c is: %c\n", target, result);
    return 0;
}
