/*Write a program in C for multiplication of two square Matrices. 

Test Data : 

Input the rows and columns of first matrix : 2 2 

Input the rows and columns of second matrix : 2 2 

Input elements in the first matrix : 

element - [0],[0] : 1 

element - [0],[1] : 2 

element - [1],[0] : 3 

element - [1],[1] : 4 

Input elements in the second matrix : 

element - [0],[0] : 5 

element - [0],[1] : 6 

element - [1],[0] : 7 

element - [1],[1] : 8 

Expected Output : 

The First matrix is : 

1 2 

3 4 

The Second matrix is : 

5 6 

7 8 

The multiplication of two matrix is : 

19 22

 43 50 

*/#include<stdio.h>
int main() 
{
    int r,c,i,j,k;
    int a[10][10],b[10][10],mul[10][10];
    
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
        //multplying matrix
       printf("The multiplication of two matrix\n");
         for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
               mul[i][j]=0;    
                for(k=0;k<c;k++)    
                {    
                    mul[i][j]+=a[i][k]*b[k][j];    
                } 
                printf("%4d",mul[i][j]);
            }
            printf("\n");
        }
    }
    else puts("Matrix size is less than 5");
return 0; 
}
