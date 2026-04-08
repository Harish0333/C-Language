/*Write a program in C to print all unique elements in an array. 

Test Data :

Print all unique elements of an array:

------------------------------------------

Input the number of elements to be stored in the array: 4

Input 4 elements in the array :

element - 0 : 3

element - 1 : 2

element - 2 : 2

element - 3 : 5

Expected Output :

The unique elements found in the array are:

3 5*/#include<stdio.h>
int main() 
{
    int a[100],i,j,n,k,count;
    printf("Enter the number of elements to be stored in the array:");
    scanf("%d",&n);
    printf("Input %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0,k=n;j<k+1;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            printf("%d",a[i]);
        }
    }
return 0;    
}
