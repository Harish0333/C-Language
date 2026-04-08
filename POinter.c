#include <stdio.h>

/* int main()
{

    int a[] = {11,22,33,44,55,66,24};   // actual variable declaration
    int b[] = {1,7,8,34,4,2,3};
    
	int *p = &a[2];
	int *q =&b[3];
    //p = &var;   // storing address of int variable var in pointer p

    printf("%d \n",p>=q);

    printf("%d \n",p<=q);
    
    printf("%d \n",(++p));
    
    return 0;
} */
int main()
{
	int a[]={2,3,4,5,6,8};
	int *p = a;
	printf("%d",*p);
	return 0;
}
