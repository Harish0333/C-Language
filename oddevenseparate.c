#include<stdio.h>
int main() 
{
    int a[10],ea[100],oa[100],i,j,k,n;
    printf("enter the size:");
    scanf("%d",&n);
    printf("Eenter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            ea[j]=a[i];
            j++;
        }
        else
        {
            oa[k]=a[i];
            k++;
        }
        
    }
    printf("Even :");
    for(i=0;i<j;i++)
    {
        printf("%4d",ea[i]);
    }
    printf("\nOdd");
    for(i=0;i<k;i++)
    {
        printf("%4d",oa[i]);
    }
    
    
return 0;    
}
