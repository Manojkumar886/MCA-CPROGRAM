#include <stdio.h>
void main()
{
   int a[4][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int b[16],r,c,i=0;
    for(r=0;r<4;r++)
    {
        for(c=0;c<4;c++)
        {
            b[i]= a[r][c];
            i++;
        }
    }   
    for(i=16-1;i>=0;i--)
    {
        if(b[i]%2!=0)
        {
            printf("%d ",b[i]);
        }
    }
}