#include<stdio.h>  
void main()
{
    int a=10;

    printf("  a value is  :%d",a);
    printf(" \na  value address id : %d",&a);

    // pointer 
    int *p=&a;//p is pointer variable
    printf("\n p value is :%d",p);
    printf(" \n p address of values : %d",*p);
    printf(" \n p variable address is :%d ",&p);  

    // pointer of pointer
    int **pop=&p;
    printf("\n pointer of pointer variable values : %d",pop);
    printf(" \n pointer of value is : %d" ,*pop);//
    printf(" \n pointer of pointer original values : %d",**pop);
    
}