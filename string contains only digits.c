#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
/*Create a function to check if a string contains only digits.



Input:

String: 12345

Output:

The string contains only digits.



Input:

String: 45A7

Output:

The string contains non-digit characters.



Explanation:

-----------------------------------------------------



The containsOnlyDigits function takes a character array (string) str as input and returns a boolean value (true if the string contains only digits, false otherwise).



The function uses a for loop to iterate through the characters of the string. The loop runs until it encounters the null character \0, which marks the end of the string.



In each iteration, the function checks if the current character str[i] is a digit using the isdigit function from the <ctype.h> library. The isdigit function returns a non-zero value if the character is a digit (0 to 9), and it returns 0 otherwise.



If the current character is not a digit (i.e., isdigit(str[i]) returns 0), the function immediately returns false, indicating that the string contains non-digit characters.



If the loop completes without finding any non-digit characters, the function returns true, indicating that the string contains only digits.



The main function asks the user to input a string and calls the containsOnlyDigits function with the given input. It then prints whether the input string contains only digits or not.

*/
bool containsOnlyDigits(const char str[]) 
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (!isdigit(str[i])) 
        {
            return 0;
        }
    }
    return true; 
}
int main() 
{
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    if (containsOnlyDigits(input)) 
    {
        printf("The string contains only digits.\n");
    } else 
    {
        printf("The string contains non-digit characters.\n");
    }
    return 0;
}
