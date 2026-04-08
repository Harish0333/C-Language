#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    printf("Enter the size of elements:");
    scanf("%d",&n);
    
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("\nSum of all elements stored in the array is : %d",sum);
    return 0;
}
