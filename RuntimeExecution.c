#include <stdio.h>

int main()
{
    printf(" MCA -I year student details: \n");

    char Student_name[40];
    int Student_age ;
    float Student_percentage;
    char Student_Initial;
    char Student_Rollno [10];

    printf(" Enter your Roll no : \n");
    scanf("%s",&Student_Rollno);
    printf("\n Enter your Name : \n");
    scanf(" %s",&Student_name);
    printf(" \nEnter your Initial\n ");
    scanf   (" %c",&Student_Initial);

 

    printf (" my Register no : %s \n My Name is :%s \n my Initial is :%c",Student_Rollno,Student_name,Student_Initial);

    return 89;
}