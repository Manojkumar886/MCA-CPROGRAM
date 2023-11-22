#include <stdio.h>
int main()
{
    int cibilscore=250;
    float salary=1.8;
    if(cibilscore>=600)
    {
        printf(" you are eligible to loan sector...!");
        if(salary<2.000000)
        {
            printf(" not eligible loan sector");
        }
        else if ((salary>=2.000000)&&(salary<=5.000000))
        {
            printf(" 4 lakhs loan will be credited in your bank...");
        }
        else
        {
            printf(".......");
        }
    }
    else
    {
        printf(" your cibil score is low....");
    } 
    return 0;
}