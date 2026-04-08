#include <stdio.h>
/*Find the Largest Element: Create a program that finds the largest element in an array of integers. 
Implement separate functions for input, finding the largest element, and main function to displaying the result.



Input as : 

Enter array size : 6

Enter 6 elements : 5 6 3 6 7 9



Output as : 

The largest element is : 9*/
int inputArray(int arr[], int size) 
{
    int i;
    printf("Enter %d elements:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    return 0;
}
int findLargestElement(int arr[],int size) 
{
    int i;
    int max = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main() 
{
    int arr[100],n;
    printf("Enter array size:");
    scanf("%d",&n);
    inputArray(arr,n);
    findLargestElement(arr,n);
    printf("The largest element is :%d",findLargestElement(arr,n));
    return 0;
}
