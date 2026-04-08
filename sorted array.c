/*Write a program in C to insert New value in the array (sorted array ) at its proper respective position as its accending order.
Test Data : 

Input the size of array : 5 

Input 5 elements in the array : 

element - 0 : 1 

element - 1 : 3 

element - 2 : 7

element - 3 : 8

element - 4 : 10

Input the value to be inserted : 6



Expected Output : 

The current list of the array : 

1 3 7 8 10



After Insert the element the new list is : 

1 3 6 7 8 10


*/#include<stdio.h>
int main()
{
    int a[100],i,j,temp,n,m,x,pos;
    printf("input the size of array:");
    scanf("%d",&n);
    printf("input %d elements in the array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Enter the value to be inserted:");
    scanf("%d",&x);
    printf("The current list:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    for (i=0;i<n;i++)
        {
            if (x<a[i])
            {
                pos=i;
                break;
            }
            if (x>a[n-1])
            { 
                pos=n;
                break;
            }
        }
        if (pos!=n)
        {
            m=n-pos+1 ;
            for(i=0;i<=m;i++)
            {
                a[n-i+2]=a[n-i+1];
            }
        }
        a[pos] = x;
    printf("\nAfter insert the element the new list is:\n");
    for(i=0;i<n+1;i++)
    {
        printf("%d",a[i]);
    }
return 0;    
}
