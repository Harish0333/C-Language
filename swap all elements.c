#include <stdio.h>
/*Program to swap all elements of two integer arrays using user define function in C.

Input as :

Enter array size : 6

Enter 6 elements for 1st array : 1 2 3 4 5 6

Enter 6 elements for 2nd array : 7 8 9 0 1 2



Output as :

After swapping :

1st array : 7 8 9 0 1 2

2nd array : 1 2 3 4 5 6*/
void swapArrays(int arr1[],int arr2[],int size) 
{
    int i=0,temp=0;
    for(i=0 ; i<size ; i++)
    {
        temp    = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
void displayArray(int arr[], int size) 
{
    int i;
    for(i=0;i<size; i++)
    {
        printf("%2d",arr[i]);
    }
    printf("\n");
}

int main() 
{
    int i,j,n;
    int arr1[100],arr2[100];
    printf("Enter array size:");
    scanf("%d",&n);
    printf("\nEnter %d elements for 1st array :\n",n);
     for(i=0 ; i<n ; i++)
    {
        scanf("%d",&arr1[i]);
    }
     printf("\nEnter %d elements for 2nd array :\n",n);
     for(j=0 ; j<n ; j++)
    {
        scanf("%d",&arr2[j]);
    }
    swapArrays(arr1,arr2,n);
    printf("\nAfter swapping :\n");
    printf("1st array :");
	displayArray(arr1,n);
	printf("\n2nd array :");
	displayArray(arr2,n);
    return 0;
}
