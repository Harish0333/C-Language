/*Write a C program to remove all occurrences of a specific element from a given array of integers. The program should display the resulting array after removing the element.

Test Data :

Input the size of array : 10

Input 10 elements in the array : 

3 2 5 6 2 7 9 2 2 1

Input the element that you want to delete: 2

Expected Output : 

The new list is : 3 5 6 7 9 1*/#include<stdio.h>
int main() 
{
	int a[10],n,i,ele;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("Enter element you want to delete:");
	scanf("%d",&ele);
	for (i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			continue;
		}
		else 
		{
			printf("%3d",a[i]);
		}
	}
return 0;    
}
