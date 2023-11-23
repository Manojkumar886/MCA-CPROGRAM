#include<stdio.h>
void main()
{
    int staff=10;
    int latecomer=0;
    float time;
    printf("Welcome to our college\n");
   do
    {
        printf(" \ntill now present staff%d",staff);
        printf("\n enter your entry time");
        scanf("%f",&time);
        if(time>9.16)
        {
        printf(" \n you are a latecomer.so,your salary is deducted 10 percentage\n");
            latecomer++;
        }
        else
        {
            printf("\n Quick Comer....!");
        }
        staff--;
    }
    while(staff>=1);
    printf("\n the latecomer staff total%d",latecomer);
}