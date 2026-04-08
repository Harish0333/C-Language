/*Write a program in C to find transpose of a given matrix.

Test Data :

Input the rows and columns of the matrix : 2 2 

Input elements in the first matrix : 

element - [0],[0] : 1 

element - [0],[1] : 2 

element - [1],[0] : 3 

element - [1],[1] : 4 

Expected Output : 

The matrix is : 

1 2 

3 4 

The transpose of a matrix is : 

1 3 

2 4

*/#include<stdio.h>
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
        //transpose matrix
        printf("The transpose of a matrix is:\n");
          for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%4d",a[j][i]);
            }
            printf("\n");
        }
        
    }
    else puts("Equivalent matrix required");
return 0;    
}
