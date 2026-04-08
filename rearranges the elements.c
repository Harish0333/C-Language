/*Write a C program that rearranges the elements of a given array by moving all the zeros to the front. 
The program should take an array as input and swap the positions of non-zero elements with zeros, 
such that all the zeros appear at the beginning of the array, while maintaining the relative order of non-zero elements.
For example: 

given the input array: [1, 0, 2, 0, 4, 5, 0, 3, 0]

Expected output:

1 2 4 5 3 0 0 0 0*/#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            printf("%d",a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            printf("%d",a[i]);
        }
    }
return 0;    
}
