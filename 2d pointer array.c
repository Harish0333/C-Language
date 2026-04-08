#include <stdio.h>
#include <stdlib.h>

int main()
{

int a[3][3];
  int i,j;
  int *ptr;
  printf("enter elements \n");
  for(i=0;i<3;i++)
  {

       for(j=0;j<3;j++)
          scanf("%d",&a[i][j]);
  }
printf("\n");

ptr=&a[0][0];
    for(i=0;i<3;i++)
  {

       for(j=0;j<3;j++)
       {


        printf(" %d ",*ptr);
        ptr++;
       }
         printf("\n");

  }

}
