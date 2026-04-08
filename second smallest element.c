/*Write a program in C to find the second smallest element in an array. 

Test Data :

Input the size of array : 5

Input 5 elements in the array (value must be <9999) :

element - 0 : 0

element - 1 : 9

element - 2 : 4

element - 3 : 6

element - 4 : 5

Expected Output :

The Second smallest element in the array is : 4*/#include<stdio.h>
int main()
{
    int a[1000],i,j,n,temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter %d elements in the array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    }
    for(i=0;i<n;i++)
    {
        printf("The second smallest element in the array is %d",a[n-2]);
        return 0;
    }
return 0;    
}
