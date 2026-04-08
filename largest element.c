#include<stdio.h>
int findMax(int arr[],int n);
/*Write a program in C to get the   of an array using recursion. 

Test Data :

Input the number of elements to be stored in the array :5

Input 5 elements in the array :

element - 0 : 5

element - 1 : 10

element - 2 : 15

element - 3 : 20

element - 4 : 25

Expected Output :

Largest element of an array is: 25*/
int main()
{
    int i,n,g;
    int arr[100];
    printf("Enter the number of elements to be stored in the array:");
    scanf("%d",&n);
    printf("Input %d elements in the array\n",n);
    for(i=0;i<n;i++)
    {
        printf("Element-%d:",i+1);
        scanf("%d",&arr[i]);
    }
    g=findMax(arr,n);
    printf("Largest elements in the array is:%d",g);
    return 0;
}
int findMax(int arr[], int n) 
{
    if (n == 1)
        return arr[0];
    int maxOfRest = findMax(arr, n - 1);
    if (arr[n - 1] > maxOfRest)
        return arr[n - 1];
    else
        return maxOfRest;
}
