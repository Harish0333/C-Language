/*Write a program in C for a 2D array of size 3x3 and print the matrix. Test Data : Input elements in the matrix : 

element - [0],[0] : 1 

element - [0],[1] : 2 

element - [0],[2] : 3

element - [1],[0] : 4 

element - [1],[1] : 5 

element - [1],[2] : 6 

element - [2],[0] : 7 

element - [2],[1] : 8 

element - [2],[2] : 9 

Expected Output : 

The matrix is : 1 2 3 4 5 6 7 8 9 */#include<stdio.h>
int main() 
{
    int r,c,i,j;
    int a[10][10];
    
    printf("Enter the size of rows and col:");
    scanf("%d %d",&r,&c);
    if(r==c)
    {
        printf("Enter %d elements:\n",r*c);
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("\nElement-[%d],[%d]:",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("\nThe matrix:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%2d",a[i][j]);
            }
        }
    }
    else puts("Equivalent Matrix required");
    return 0;    
}
