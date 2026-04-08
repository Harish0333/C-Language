/*Write a program in C to find sum of rows an columns of a Matrix. 

Test Data : 

Input the size of the square matrix : 2 

Input elements in the first matrix : 

element - [0],[0] : 5 

element - [0],[1] : 6 

element - [1],[0] : 7 

element - [1],[1] : 8 

Expected Output : 

The First matrix is : 

The matrix is : 

5 6 

7 8 

The sum or rows and columns of the matrix is : 

5     6 11 

7     8 15 

12 14 */#include<stdio.h>
int main()
{
    int r,c,i,j,sum,sumc;
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
        //sum of rows matrix
        printf("The sum of rows and columns of the matrix is:\n");
        for(i=0;i<r;i++)
        {
            for(j=sum=0;j<c;j++)
            {
                printf("%4d",a[i][j]);
                sum+=a[i][j];
            }
            printf("%4d\n",sum);
        }
        //sum of cols matrix
          for(i=0;i<r;i++)
        {
            for(j=sumc=0;j<c;j++)
            {
                
                sumc+=a[j][i];
            }
            printf("%4d",sumc);
        }
        
    }
    else puts("Equivalent matrix required");
    return 0;    
}
