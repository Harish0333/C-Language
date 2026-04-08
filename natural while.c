#include<stdio.h>
int main() {
    
    int n,sum,i=1;
  printf("Enter n value:");
  scanf("%d",&n);
  while(n>=i)
  {
      sum=sum+n;
      n--;
   
  }
  printf("Sum of natural numbers from 1 to %d :%d",n,sum);
    return 0;
}
