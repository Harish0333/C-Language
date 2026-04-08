/*Write a C program to find the  from an array.
Input as :

Enter array size : 5

Enter 5 elements : 4 5 3 6 2

Man element is : 6*/#include<stdio.h>
int main()
{   
    int a[100],i,n,max;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("Max element is:%d",max);
    return 0;
}
