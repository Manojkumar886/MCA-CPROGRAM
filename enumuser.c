#include<stdio.h>

enum  month{jan=1   ,feb,mar,apr,may,jun,july,aug,sep,oct,nov,dec};

void main()
{
    enum month monthnames;
    monthnames=oct;
    printf("%d",monthnames);

    for(int i=jan;i<=dec;i++)
    {
        printf(" \n %d ",i);
    }


}