#include<stdio.h>
void cbv(int data)
{
    data++;
}
void cbr( int *p)
{
    (*p)++;
}
void main()
{
    int a=10;
    cbv(a); //function calling-cbv (passing variable)
    printf("a value is : %d",a);

    cbr(&a);//passing address of a
    printf("\n after using pointer of a value is : %d",a);
}