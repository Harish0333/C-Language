#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("Enter the size of elements:");
    scanf("%d",&n);
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are:");
     for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
 
    return 0;
}
