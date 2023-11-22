#include <stdio.h>
void main()
{
    int alpha=56;
    int cosmo=65;
    int result;

    result=alpha+cosmo;//56+65=121 v //arithemetic
    result+=29; //assignment  121+29=150
    printf("%d",result);//150  

    printf(" \n%d",(alpha<=cosmo)); // 56>=65 -relational or comparision

    printf("\n OR Operator : %i",((alpha==cosmo)||(alpha<=cosmo)));
    printf(" \nNOT Operator %d",!(alpha==cosmo));
    int c=45;
    //bitwise operator
    printf("\n bitwise AND :%d",(c&cosmo));
    printf("\n bitwise OR :%d",(c|cosmo));
    printf("\n bitwise XOR :%d",(c^cosmo));
    printf("\n bitwise Complementary :%d",~(c));
    // increment /decrement
    printf(" preincrement%d",++c);//46
    printf( "post increment %d",c++);//46
    printf(" chaning the value:%d",c);//47
}  
