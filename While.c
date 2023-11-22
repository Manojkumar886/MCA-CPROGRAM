#include <stdio.h>

void main()
{
    // while(1)
    // {
    //     printf(" MCA");
    // }  
    int available=20;
    int quantity;
    int payamount;
    int topayable;
    while(available>0)
    {
        printf("how many no of one plus mobile you want price @24000");
        scanf(" %d",&quantity);
        if(quantity>available)
        {
            printf("only available @ %d ",available);
        }
        else
        {
            topayable=quantity*24000;
            printf(" \n %d has to pay ",topayable);
            printf(" \n enter the amount ");
            scanf("%d",&payamount);
            if(topayable<=payamount)
            {
                printf(" you bought one plus mobile of Quantity %d",quantity);
                available-=quantity;// 20-10=10
                printf(" now available quantity %d",available);
            }
            else{
                printf(" insufficient amount");

            }        
        }
    }
}