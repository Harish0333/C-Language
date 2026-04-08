#include <stdio.h>
int main()
{
    int n,m,min,max,r;
    printf("Entera num");
    scanf("%d",&n);
    m=n;
    min=9;
    max=0;
    while(m!=0)
    {
    	r=m%10;
	   	if(r<min)min=r;
	   	if(r>max)max=r;
	   	m=m/10;
	}
	printf("\nMax =%d and min=%d and num==%d",max,min,n);
}
