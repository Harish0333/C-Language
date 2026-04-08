#include <stdio.h>
#include <stdbool.h>
#include <string.h>
/*Implement a function to check if two strings are anagrams of each other.



Input:

First string: listen

Second string: silent



Output:

The strings are anagrams.



Input:

First string: hello

Second string: world



Output:

The strings are not anagrams.



Explanation:

-------------------------------------------------------------



The areAnagrams function takes two character arrays (strings) str1 and str2 as input and returns a boolean value (true if the strings are anagrams, false otherwise).



The function first checks if the lengths of the two strings are different. If they are different, the function immediately returns false, as strings with different lengths cannot be anagrams.



The function then creates two integer arrays freq1 and freq2 of size 256 (assuming ASCII characters) to store the frequency of characters in both strings. Each element of the arrays corresponds to the frequency of a character represented by its ASCII value.



The function then populates the frequency arrays by iterating through the characters of both strings. It counts the occurrences of each character by incrementing the corresponding element in the frequency array.



After populating the frequency arrays, the function compares them to check if the strings are anagrams. If the frequency of any character in str1 differs from the frequency of the same character in str2, the function returns false, as the strings cannot be anagrams.



If the function completes the loop without finding any discrepancies in the frequency arrays, it returns true, indicating that the strings are anagrams of each other.



The main function asks the user to input two strings and calls the areAnagrams function with the given inputs. It then prints whether the input strings are anagrams or not.

*/
bool areAnagrams(const char str1[], const char str2[])
{
    int i;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) 
    {
        return false;
    }

    int freq1[256] = {0};
    int freq2[256] = {0};

    for (i = 0; i < len1; i++) 
    {
        freq1[(int)str1[i]]++;
        freq2[(int)str2[i]]++;
    }
    for (i = 0; i < 256; i++) 
    {
        if (freq1[i] != freq2[i]) 
        {
            return false; 
        }
    }
    return true; 
}
int main()
{
    char input1[100];
    char input2[100];
    printf("first string: ");
    scanf("%s", input1);
    printf("second string: ");
    scanf("%s", input2);
    if (areAnagrams(input1, input2)) 
    {
        printf("strings are anagrams.\n");
    } else 
    {
        printf("strings are not anagrams.\n");
    }
    return 0;
}
