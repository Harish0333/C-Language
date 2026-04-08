#include<stdio.h>
#include<stdlib.h>
void main()
{
  int num;
  printf("\nEnter a number ");
  scanf("%d",&num);
  if(num%3==0)
  {
    if(num%5==0)
    {
      printf("\nThe number %d is divisible by 3 and 5");
    }
    else
    {
      printf("\nThe number %d is divisible by 3 but not by 5");
    }
  }
  else
  {
    printf("\nThe number %d is niether divisible by 3 nor by 5");
  }
getch();
}
