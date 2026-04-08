/*Write a program in C to print separately the  odd and even integers 

Test Data :

Input the number of elements to be stored in the array :5

Input 5 elements in the array :

element - 0 : 25

element - 1 : 47

element - 2 : 42

element - 3 : 56

element - 4 : 32

Expected Output :

The Even elements are :

42 56 32

The Odd elements are :

25 47


*/#include<stdio.h>
int main()
{
    int a[10],n,i,j,k,ae[10],ao[10];
    printf("Enter the size of elements:");
    scanf("%d",&n);
    
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            ae[j]=a[i];
            j++;
        }
        else
        {
            ao[k]=a[i];
            k++;
        }
    }
     for(i=0;i<j;i++)
    {
         printf("\nEven elements are : %d",ae[i]);
    }
    for(i=0;i<k;i++)
    {
         printf("\nOdd elements are : %d",ao[i]);
    }
   
       
    return 0;
}
