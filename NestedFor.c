#include <stdio.h>
void main()
{
    printf(" Giant Wheel");
    for(int cabin=1;cabin<=4;cabin++)  //outer for loop
    {    printf(" \n  now filling cabin no is : %d",cabin);
        for(int seat=1;seat<=4;seat++)  //inner for loop
        {
            printf(" \n seat no: %d",seat);
            printf("\n enter amount :");
            int amount;
            scanf("%d",&amount);
            if(amount>=100)
            {
                printf(" you can play the round");
            }
            else{
                printf(" you can't play");
            }
        }
    }
}