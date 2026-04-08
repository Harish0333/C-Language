#include <stdio.h>
#include <conio.h>
void sorting(int *x, int y);
void main()
{
 int a[5],b,c;
 clrscr();
 printf("enter 5 nos");
 for(b=0; b<5; b++)
 {
  scanf("%d",&a[b]);
 }
 sorting(a, 5);
 getch();
}

void sorting(int *x, int y)
{
 int i,j,temp;
 for(i=1; i<=y-1; i++)
 {
  for(j=0; j*(x+j+1))
   {
    temp=*(x+j);
    *(x+j)=*(x+j+1);
    *(x+j+1)=temp;
   }
  }
 }
 for(i=0; i<5; i++)
 {
  printf("\t%d",*(x+i));
 }
}
