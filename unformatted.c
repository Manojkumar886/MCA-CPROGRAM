#include <stdio.h>
#include <conio.h>

void main()
{
    // char gender;

    // getchar()
    // printf(" Enter your gender : ");
    // gender=getchar();
    // printf(" my gender : %c",gender);
    // putchar(gender);

    // getch()
    // printf(" Enter your gender : ");
    // gender=getch();
    // printf(" \n my gender : %c",gender);
 
    // getche
    // printf(" my gender : %c",gender);
    // gender=getche();
    // printf(" \n my gender : %c",gender);

    // gets()

    // char content[50];
    // printf(" Enter something :");
    // gets(content);
    // puts(content);

    char employeedetails[50]=" Manoj 14356 89.62 M";

    char name[10];
    int rollno;
    float percentage;
    char gender;

    sscanf(employeedetails, "%s %d %f %c",&name,&rollno,&percentage,&gender);  
    printf(" \n my name  is : %s",name);
    printf("\n my roll no : %i",rollno);
    printf("\n my gender : %c",gender);
    printf("\n ug percentage : %.2f",percentage);

    char myresult[70];

    sprintf(myresult,"\n my name  %s ,my roolno %d ,my gender : %c , my percentage  %f ",name,rollno,gender,percentage);  

    printf("%s ",myresult);
 
}