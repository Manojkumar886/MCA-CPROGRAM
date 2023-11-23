#include<stdio.h>
void sample(int onevalue)
{
    onevalue+=100;
    onevalue*=10;
}
void simple(int arrayvalue[])
{
    printf(" first index of value is : %d",arrayvalue[0]);
    arrayvalue[0]=13;
}
void main()
{

    int data=35;
    printf(" my data %d",data);
    sample(data);
    printf("\n my data after using function :%d",data);

    int listofdata[10]={1,2,3,4,5,6,7,8,9,10};
    printf("\n");
    printf(" 0 index of value is : %d",listofdata[0]);
    simple(listofdata);
    printf(" \n 0 index of value after using function: %d",listofdata[0]);
}