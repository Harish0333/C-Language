#include<stdio.h>
int main() 
{
    int a[100],ar[100],arr[100],n1,n2,n3,i,j,k;
    printf("Enter the size of first array:");
    scanf("%d",&n1);
    printf("enter %d elements in the first array:",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second array:");
    scanf("%d",&n2);
    printf("enter %d elements in the second array:",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&ar[i]);
    }
    n3=n1+n2;
    for(i=0;i<n1;i++)
    {
        arr[i]=a[i];
    }
    for(j=0;j<n2;j++)
    {
        arr[i]=ar[j];
        i++;
    }
    for(i=0;i<n3;i++)
    {
        for(k=0;k<n3-1;k++)
        {
            if(arr[k]<=arr[k+1])
            {
                j=arr[k+1];
                arr[k+1]=arr[k];
                arr[k]=j;
                
            }
        }
    }
    printf("The merged array in descending order is:\n");
    for(i=0;i<n3;i++)
    {
        printf("%4d",arr[i]);
    }
return 0;    
}
