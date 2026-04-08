/*Write a C program to find and print all the missing elements that are not present in a given array. 
Given an array of integers, your task is to identify and print all the numbers that are missing within a specified range.

For example:

given the input array arr = [1, 4, 7, 12, 17] 

Expected output as : 2 3 5 6 8 9 10 11 13 14 15 16*/#include<stdio.h>
int main()
{
    int a[100],i,j,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<i;j++)
        {
               printf("%d",a[i]++);
        }
      
    }
    return 0;    
}
