#include<stdio.h>
void deposit(int);
int withdraw(int);
void balancecheck();
static int balance=5000; //static variable
 
void main()
{
    char work;
    int take,get;
    do{
        // int a=10;//instance variable
        printf("----Welcome to Canara Bank----------");
        printf(" \nwhich one you want \nwithdraw(w) \n Deposit(d)\n Balancecheck(b)\n");
        scanf("%c",&work);
        switch(work)
        {
            case 'W':case 'w':
                printf(" you are choose to withdraw the money \n ");
                printf(" enter your withdraw amount \n");
                scanf("%d",&take);
                withdraw(take); 
                break;    
            case 'D':case 'd':
                printf(" you are choose to deposit the money \n ");
                printf(" enter your deposit amount:\n");
                scanf("%d",&get);
                deposit(get);
                break;
            case 'B':case 'b':
                balancecheck();
                break;        
        }
    }while(1);
}

void deposit(int got)
{
    balance+=got;
    printf("\n Successfully deposited in your account ");
}

int withdraw(int wish)
{
    if(balance>=wish)
    {
        printf(" withdraw amount is :%d",wish);
        balance-=wish;
    }
    else{
        printf(" your balance is low");
    }
    return -1;
}
void balancecheck()
{
    printf("\ncurrently available your balance : %d",balance);
}
