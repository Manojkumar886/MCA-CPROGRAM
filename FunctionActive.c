#include <stdio.h>

// w/o return type w/o arguments or parameter
void Looping()  //function definition
{
    printf(" Welcome Looping Concept\n");
    for(int i=0;i<=2;i++)
    {
        printf("%d ",i);
    }
}

// w/o argumengts with returntype;
int  Conditional()
{
    int a=10;
    int b=35;
    int result =a+b;
    return result;
}



// with arugument w/o Returntype
void Execution( char gender,int number)
{
    printf(" \nmy gender is : %c",gender);
    printf(" \nmy register number is :%d",number);
}

// With Aruguments and With returnType
int Operator(int a,int b)
{
    int Addition=a+b;
    Addition-=10;
    int BitwiseAND=(a&Addition);   //a=45,Addition=100
    return BitwiseAND;
}
void main()
{
    Looping();//functionn calling

     int age= Conditional();
     printf("%d this number is give to conditional function",age);

     Execution('M',age);

   int ANDBITWISEVALUE=  Operator(45,65);
   printf("\n A=45,Addition=100 (a&Addition) value is : %d",ANDBITWISEVALUE);
    Looping();
}