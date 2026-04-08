/*Write a program in C to count the frequency of each element of an array.

Test Data :

Input the number of elements to be stored in the array :6

Input 6 elements in the array :

element - 0 : 25

element - 1 : 12

element - 2 : 43

element - 3 : 43

element - 4 : 25

element - 5 : 15

Expected Output :

The frequency of all elements of an array :

25 occurs 2 times

12 occurs 1 times

43 occurs 2 times

15 occurs 1 times*/#include<stdio.h>
int main() 
{
    int a[100],i,j,n,freq[100];
    printf("input the num of elements to be stored in the array:");
    scanf("%d",&n);
    printf("Input %d elements in the array:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        freq[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        int count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=count;
        }
    }
    printf("The frequency of all elements of an array:\n");
    for(i=0;i<n;i++)
    {
        if(freq[i]!=0)
        {
            printf("%d occurs %d times\n",a[i],freq[i]);
        }
    }
    
return 0;    
}
