#include<stdio.h>
int  main()
{
	int marks,phy,che,math,cs,bio,total,per;
	printf("Enter the marks of the stduent in five sub:\n");
	printf("Enter physics marks:");
	scanf("%d",&phy);
	printf("Enter chemistry marks:");
	scanf("%d",&che);
	printf("Enter math marks:");
	scanf("%d",&math);
	printf("Enter cs marks:");
	scanf("%d",&cs);
	printf("Enter bio marks:");
	scanf("%d",&bio);	
	

	if(phy>100||che>100||math>100||cs>100||bio>100)
	{
		printf("Invalid marks");
	}
	else{
	total =phy+che+math+cs+bio;
	per=total/5;
	printf("Percentage %d",per);
	switch(per/10)
	{
		case 10:
		
		case 9:puts("\nGrade A");
		break;
		
		case 8:puts("\nGrade B");
		break;
		
		case 7:puts("\nGrade C");
		break;
		
		case 6:puts("\nGrade B");
		break;
		
		case 5:puts("\nGrade B");
		break;
		
		default:puts("\nFail");
	
		}
}
}
