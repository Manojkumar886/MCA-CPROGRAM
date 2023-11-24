#include<stdio.h>
 struct employee
    {
        int emp_id;
        char emp_name[50];
        char emp_initial;

    };

void main()
{
    struct employee emp1={1001,"Manoj",'M'};
    struct employee emp2={1002,"Pavi",'N'};
    printf(" emp1 - %s details",emp1.emp_name);

    printf(" emp id: %d \n emp name :%s \n emp_initial:%c",emp1.emp_id,emp1.emp_name,emp1.emp_initial);
    }