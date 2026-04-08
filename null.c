#include<stdio.h>
// local & global variables
int main()

{
  int var =3;
     
      {
      	int var =5;
      	 printf("%d\n",var);
	  }
	    printf("%d\n",var);
        return 0;
}
