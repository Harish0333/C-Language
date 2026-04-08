/*Write a program in C to delete an element at desired position from an array. 
Test Data : 

Input the size of array : 5 

Input 5 elements in the array in ascending order: 

element - 0 : 1 

element - 1 : 2 

element - 2 : 3 

element - 3 : 4 

element - 4 : 5 



Input the position which to delete: 3 

Expected Output : 

The new list is : 1 2 4 5 */#include<stdio.h>
int main()
{
    int a[100],i,j,num,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter %d elements in the array in asc order:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position which to delete:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
      if(a[i]==num) 
      { 
        for(j=i;j<n;j++) 
        { 
          a[j] = a[j+1]; 
        } 
      } 
    }
    printf("\nThe new list is:\n");
    for(i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }

return 0;    
}
