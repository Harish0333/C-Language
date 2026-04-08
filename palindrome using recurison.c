#include <stdio.h>
#include <string.h>
 /*Write a C program to check whether a given string is a palindrome or not using recursion. 

Test Data :

Input a word to check for palindrome : mom

Expected Output :

 The entered word is a palindrome.  */
void palindrome(char [], int);
int main()
{
    char string[15];
    printf("Enter A String: ");
    scanf("%s", string);
    palindrome(string, 0);
    return 0;
}
 
void palindrome(char string[], int index)
{
    int len = strlen(string) - (index + 1);
    if (string[index] == string[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("The Entered word is A Palindrome\n");
            return;
        }
        palindrome(string, index + 1);
    }
    else
    {
        printf("It Is Not A Palindrome\n");
    }
}
