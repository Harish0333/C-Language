#include<stdio.h>
int main() 
{
    int a[10],n,i,j,count;
    printf("Enter the size of elements:");
    scanf("%d",&n);
    
    printf("Enter the %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         count=0;
          for(j=2;j<a[i];j++)
          {
              if(a[i]%j==0)
              count=1;
              break;
          }
          if(count==0)
          {
              printf("%2d",a[i]);
          }
     }
return 0;
}
