/*Write a program in C to find sum of right diagonals of a matrix.*/#include<stdio.h>
int main()
{
    int r,c,i,j,sum;
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
        // matrix
        printf("The sum of Right diagonals is:");
          for(i=0;i<r;i++)
        {
            
            for(j=0;j<c;j++)
            {
                if((i+j)==(n-1))
                {
                    sum+=a[i][j];
                }
            }
        }
        printf("%2d",sum);
    }
    else puts("Equivalent matrix required");
return 0;    
}
