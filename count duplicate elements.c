/*Write a program in C to count a total number of duplicate elements in an array.

Input the number of elements to be stored in the array :6

Input 6 elements in the array :

element - 0 : 5

element - 1 : 1

element - 2 : 1

element - 3 : 6

element - 4 : 3

element - 5 : 5

.....................
Expected Output :

Total number of duplicate elements found in the array is : 2*/#include<stdio.h>
int main() 
{
    int a[100],i,j,n,count=0;
    printf("Enter the array Size:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements found in the array is :%d",count);
return 0;    
}
