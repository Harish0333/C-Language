#include<stdio.h>
int main()
{
    int a[100],n,i,temp=0;
    printf("Enter the size of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The values store into the array are:");
     for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
    
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("\nThe values store into the array in reverse are:");
     for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
    return 0;
}
