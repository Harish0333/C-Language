/*Write a program in C to print or display the lower triangular of a given matrix. 

Test Data : 

Input the size of the square matrix : 3 

Input elements in the first matrix : 

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

The matrix is : 

1 2 3 

4 5 6 

7 8 9 

Setting zero in lower triangular matrix 

1 2 3 

0 5 6 

0 0 9 

*/
#include<stdio.h>
int main()
{
    int r,c,i,j;
    int a[10][10];
    
    printf("Enter the size of rows and col:");
    scanf("%d %d",&r,&c);
    if(r==c && r<=5)
    {
        //1st matrix
        printf("Enter elements in first matrix:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("\nElement-[%d],[%d]:",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        //printing first matrix
         printf("The matrix is:\n");
          for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%4d",a[i][j]);
            }
            printf("\n");
        }
        printf("Setting zero in lower triangular matrix:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i>j)
                {
                    a[i][j]=0;
                    printf("%4d",a[i][j]);
                }
                else
                {
                    printf("%4d",a[i][j]);
                }
                
            }
            printf("\n");
        }
    }
    else puts("Equivalent matrix required");
    return 0;    
}
