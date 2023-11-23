#include <stdio.h>

void main()
{
    int row =3;
    int column=4;
    int matrix [row] [column]; 
    // assigned no of values
    for(int row=0;row<=2;row++)
    {
        for(int column=0;column<=3;column++)
        {
            printf("Current [row %d ] [column %d ]",row,column);
            scanf("%d",&matrix[row][column]);
        }
    }
    // print your 2-d array values
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=3;j++)
        {
            printf("%d  ",matrix[i][j]);
        }
        printf("\n ");
    }
}