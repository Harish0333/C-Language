#include<stdio.h>
int main()
{
	int id;
	printf("Enter the ID no:");
	scanf("%d",&id);
	switch(id)
	{
		case 11:case 12:case 13:case 14:case 15:puts("software department");
		break;
		case 23:case 22:case 21:puts("Management department");
		break;
		default :puts("Developer department");
	}
}
