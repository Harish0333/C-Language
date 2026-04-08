/*Write a C program to find the min element from an array.
Input as :

Enter array size : 5

Enter 5 elements : 4 5 3 6 2

Min element is : 2*/
#include<stdio.h>
int main() 
{
    int a[100],i,n,min;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            printf("min elements is: %d\n",min);
            return 0;
        }
    }
    printf("Min element not found");
    return 0;
}
