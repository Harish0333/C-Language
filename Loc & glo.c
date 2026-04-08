#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//**int Ram = 55; 
//** global
/* void Hari()
{
printf("global variable %d",Ram+50);
}
int main()
 {
	int Ram =22 ; 
	
	printf("local variable %d\n",Ram);
	Hari();
		
	} **/
	
/* int main()
 { int MyArray[6] ={9,7,3,5,6,7};
 
 int AcessArray = MyArray[1];
 
 MyArray[1]=55;
 
 for (int i=0;i<6;i++)
 {
 	
 	 printf("the Element [%d] is %d\n",i,MyArray[i]);
 }
 }	*/
 int main() 
 {
 	int MyArray [2] [3] = {{5,9,3} , {2,6,8}
};

  for (int i=0;i<2;i++)
 {
 	for (int j=0;j<3;j++)
	 {
	 	printf("MyArray [%d] [%d] is %d\n",i,j,MyArray[i][j]);
	 }
 }
  };
