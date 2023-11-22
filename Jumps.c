#include <stdio.h>

void main()
{
    // break;
    // for(int i=1;i<100;i++)
    // {
    //     if(i==11)
    //     break;
    //     printf("%d \n",i);
    // }

    // continue
    //      i- (i-2)*2
    // for(int i=1;i<=10;i++)
    // {
    //     if(i%2!=0)
    //     continue;
    //     printf("\n %d",i);
    // }


    // GOTO

        printf(" ENter any numbers \n");
        int myfavno;
        scanf("%d ",&myfavno);

        if(myfavno%2==0)
        {
        goto even;
        }
        else
        {
        goto odd;
        }

        even:
        printf("%d this is even number :",myfavno);
        return;  
        odd:
        printf("%d this is odd number :",myfavno);
}