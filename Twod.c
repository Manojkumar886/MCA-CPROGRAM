#include <stdio.h>
void main()
{

    int mydata[3][3]={ {1,2,3},{4,5,6},{7,8,9} };

    // printf("%d",mydata[1][2]);

    for(int row=0;row<=2;row++)
    {
        for(int column=0;column<=2;column++)
        {
            printf("%d  ",mydata[row][column]);
        }
        printf("\n");
    }
}