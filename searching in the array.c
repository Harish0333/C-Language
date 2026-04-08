/*Write a C program to find the element given by user is present in the 
array or not 
If the element is present in the array also programmer have to print 
index position of that searching element.
If the user pass the element for searching in the array is not present
then also provide a appropriate message to the user that element is not 
present inside the array.
Input 1:-
[1,2,3,4,5,6,7]
Enter the number you want to search : 5
Output :-
The element which you have sreached is present inside the 4rth index 
Input 2:-
[1,2,3,4,3,6]
Enter the number you want to search : 9
Output :

The element which you have sreached is not present inside the Array.
*/
#include<stdio.h>
int main() 
{
    int a[20],n,i,ele;
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to search:");
    scanf("%d",&ele);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            printf("%d element is present in the %d position\n",ele,i+1);
            return 0;
        }
    }
   printf("The element %d which you have searched is not present inside the Array.",ele);
    return 0;
}
