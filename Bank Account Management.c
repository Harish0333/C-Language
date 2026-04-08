#include <stdio.h>
#include<stdlib.h>
/*Bank Account Management: Develop a program that simulates a simple bank account system. 
Users can create accounts, deposit money, withdraw money, and check their balances. 
Implement separate functions for these operations. Take the initial balance as Rs.2000.

Condition : 

For deposit :

* If the user want to deposit 0 or negetive amount then print "Invalid amount to deposit"



For withdraw : 

* If the user want to withdraw 0 or negetive amount then print "Invalid amount to withdrawal"

* If the user given amount is greater than the balance then print "Insufficient Funds"*/
float balance = 2000; 

void createAccount() 
{   
    char str[10],str2[10];
    int num,id;
    printf("Enter first name:");
    scanf("%s",str);
    printf("Enter last name:");
    scanf("%s",str2);
    printf("\nEnter the number:");
    scanf("%d",&num);
    printf("\nGov Id no:");
    scanf("%d",&id);
    printf("\n*****************************");
    printf("\n----------Thank you----------");
    printf("\nyour Account has been registered!!!");
    printf("\nplease check the details:");
    printf("\nName :%s %s\nNumber:%d\nGov Id:%d\n",str,str2,num,id);
}

void deposit() 
{
    int acnum;
    printf("Enter ur account number:");
    scanf("%d",&acnum);
    printf("Enter amount:");
    scanf("%f",&balance);
    if(balance<=2000 || balance<=0)
    {
        printf("Invalid amount to deposit");
    }
    else
    {
        printf("Amount deposited succesfully !!!");
    }
}
void withdraw() 
{
    int draw;
    printf("Enter amount:");
    scanf("%d",&draw);
    if(draw<=0)
    {
        printf("Invalid amount to withdraw");
    }
    else if(draw>balance)
    {
        printf("Insufficient Funds !!!");
    }
    else
    {
        printf("Amount withdrawn succesfully !!!");
    }
}

void checkBalance() 
{
    printf("Available Balance: RS %.2f",balance);
   
}

int main() 
{
    int op;
    printf("-----------------Welcome to Bank of ABC------------------\n");
    printf("---------------------------------------------------------");
    printf("\nPress 1 to create bank account");
    printf("\nPress 2 to deposit");
    printf("\nPress 3 to withdraw");
    printf("\nPress 4 to Check balance");
    printf("\n");
    printf("\nEnter your choice:");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        createAccount();
        break;
        case 2:
        deposit();
        break;
        case 3:
        withdraw();
        break;
        case 4:
        checkBalance();
        break;
        default:
        return 0;
    }
    return 0;
}
