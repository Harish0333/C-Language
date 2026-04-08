/*Write a program in C to find the nth largest element in an array
Test Data :

Input the size of array : 5

Input 5 elements in the array :

element - 0 : 2

element - 1 : 9

element - 2 : 1

element - 3 : 4

element - 4 : 6
Enter nth largest : 3

Expected Output :

The 3 largest element in the array is : 4*/#include<stdio.h>
int main() 
{
    int a[100],i,n,num;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter %d elements in the array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter nth largest number:");
    scanf("%d",&num);
    printf("\nThe %d largest element in the array is :%d",num,a[n-2]);
  
return 0;    
}
