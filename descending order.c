/*Write a C program to Sort the array in descending order and print it.
Input as :

Enter array size : 6

Enter 6 element : 4 3 5 6 2 1



Output as :

After sorting in ascending order :

6 5 4 3 2 1*/#include<stdio.h>
int main() 
{
    int a[10],i,j,n,temp;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    
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
    printf("dewscending order:");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    
    return 0;
}
