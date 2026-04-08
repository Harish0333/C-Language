/*Write a program in C for subtraction of two Matrices. 

 Test Data :

 Input the size of the square matrix (less than 5): 2

 Input elements in the first matrix :

element - [0],[0] : 5 

element - [0],[1] : 6 

element - [1],[0] : 7

element - [1],[1] : 8 

Input elements in the second matrix :

 element - [0],[0] : 1 

element - [0],[1] : 2 

element - [1],[0] : 3 

element - [1],[1] : 4 

Expected Output : 

The First matrix is : 

5 6 

7 8

The Second matrix is : 

1 2 

3 4 

The Subtraction of two matrix is : 

4 4

4 4 


*/#include<stdio.h>
int main() 
{
    int r,c,i,j;
    int a[10][10],b[10][10],sub[10][10];
    
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
         //2nd matrix
        printf("\nEnter elements in second matrix:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("\nElement-[%d],[%d]:",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        //printing first matrix
        printf("The first matrix\n");
          for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%4d",a[i][j]);
            }
            printf("\n");
        }
        //second matrix
         printf("The second matrix\n");
          for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%4d",b[i][j]);
            }
            printf("\n");
        }
        //adding matrix
       printf("The Subtraction of two matrix\n");
         for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                sub[i][j]=a[i][j]-b[i][j];
                printf("%4d",sub[i][j]);
            }
            printf("\n");
        }
    }
    else puts("Matrix size is less than 5");
return 0; 
}
