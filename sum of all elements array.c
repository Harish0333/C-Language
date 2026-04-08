#include <stdio.h>
/*Create a function to calculate the sum of all elements in an integer array.



Input:

Size of the array: 5

Array elements: 10 20 30 40 50



Output:

Sum of all elements in the array: 150



Explanation:

--------------------------------------------------------------


The arraySum function takes two arguments - an integer array arr and its size size. It returns an integer representing the sum of all elements in the array.

Inside the function, an integer variable sum is initialized to 0. This variable will hold the cumulative sum of the elements as we iterate through the array.


The function uses a for loop to iterate through the array. The loop runs from i = 0 to i < size, covering all elements in the array.



In each iteration, the current element arr[i] is added to the sum variable using the += operator. This accumulates the sum as we move through the array.



Once the loop finishes, the function has added all the elements of the array to the sum.



The function then returns the value of sum, which represents the sum of all elements in the array.



The main function asks the user to input the size of the array and the elements of the array. 
It then calls the arraySum function with the given input and prints the sum of all elements in the array.*/
int arraySum(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum;
}
int main() 
{
    int size;
    printf("size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Array elements:");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int sum = arraySum(arr, size);
    printf("The sum of elements in the array is: %d\n", sum);
    return 0;
}
