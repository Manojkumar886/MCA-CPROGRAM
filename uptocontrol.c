#include <stdio.h>
void main()
{
    char place;
    int pack;
    int memberscount;
    int pay;

    printf(" -------Welcome Swamy iyappa Travels---------");
    printf(" tell us which place wish to book for vacation");
    scanf("%c",&place);

    switch(place)
    {
        case 'G':case 'g':
        printf("\nyou are selected GOA has following package");
        printf("\n 3nights pack \n 5 nights pack \n 10 nightspack \n select any package ");
        scanf("%d",&pack);
        switch(pack)
        {
            case 3:
            printf(" \nchoose to three day four night plan  per head @ 7000");
            printf(" \n Stay @ Green TEA HOTEL VIP PACK ROOMS ");
            printf("\n veg and non veg will provided three days and extra beverages,drink is own expensive");
            printf("\n places go to golden island,baga,Theme Park....!");

            printf("\nplease tell us members of vacation");
            scanf("%d",&memberscount);

            double payable=memberscount*7000;
            printf("\n %lf has to pay ",payable);
            if(memberscount>=3)
            {
                payable-=(payable*0.0050);
                printf(" \n %.2lf has to pay in discount amoutn",payable);   
            }

            printf(" \n enter your amount");    
            scanf("%d",&pay);

            if(pay>=payable)
            {
                printf("\nGoa Vacation Booked Successfully");

            }
            else{
                printf("\ncolud't booked due to insuffient amount");
            }

        }
        break;
        case 'K':case 'k':
        break;

        default:
            printf(" %c not available",place);
    }
}