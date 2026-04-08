#include <stdio.h>

int main() {
  
   //Write your code here...
   int chs,tea,arcof,clcof,amount;
   int teacst=10,arcofcst=20,clcofcst=50;
   
   printf("Welcome to our Tea stall Counter!\n\tOur menu:\n");
   printf("1.Tea---------------Rs.10\n");
   printf("2.Coffee------------Rs.20\n");
   printf("3.Cold Coffee-------Rs.50\n");
   printf("4.Exit.\n");
   printf("Choose by entering a nummber from (1-4):");
   scanf("%d",&chs);
  
  //billing
  
  int bill(int n1, int n2) // pass n1 and n2 parameter  
    {  
    int c;  
    c = n1 * n2; 
    return c;
    }
    
    //payment
    int pay(int p1,int p2)
    {
        int p3;
        p3=p1-p2;
        return p3;
    }
    
    //cancellation
    char cancellation()
    {
        char can,exp;
        printf("\nCancel you order?\nPress Y for yes or N for no:");
        scanf("%c",&can);
        getchar();
        if(can=='y'||can=='Y')
        {
            printf("Odrer cancelled.refund Rs.");
        }
        else if(can=='n'||can=='N')
        {
            printf("Explore more of finalize?");
            scanf("%c",&exp);
            getchar();
            if(exp=='y'||exp=='Y')
            {
                printf("Certainly lets explore.");
            }
            else puts("Thank you for visiting! We look forward to serving you again soon!");
        }
        return 0;
    }
    //choice
   if(chs==1)
   {
       printf("How many cups of refreshing tea?");
       scanf("%d",&tea);
       printf("total for %d:Rs%d\n",tea,bill(tea,teacst));
        printf("Enter your payment Amount: Rs.");
        scanf("%d",&amount);
        printf("Change:Rs %d",pay(amount,bill(tea,teacst)));
        cancellation();
        
   }
   if(chs==2)
   {
       printf("How many cups of aromatic coffee?");
       scanf("%d",&arcof);
       printf("total for %d:Rs%d\n",arcof,bill(arcof,arcofcst));
       printf("Enter your payment Amount: Rs.");
        scanf("%d",&amount);
        printf("Change:Rs %d",pay(amount,bill(arcof,arcofcst)));
   }
   if(chs==3)
   {
       printf("How many cups of chilled cold coffee?");
       scanf("%d",&clcof);
       printf("total for %d:Rs%d\n",clcof,bill(clcof,clcofcst));
        printf("Enter your payment Amount: Rs.");
        scanf("%d",&amount);
        printf("Change:Rs %d",pay(amount,bill(clcof,clcofcst)));
   }
   if(chs==4)puts("Thank you,please visit again next time!!!");
    return 0;
}
