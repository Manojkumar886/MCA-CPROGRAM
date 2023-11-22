#include <stdio.h>
 void main()
 {   
    // for(int start=1;start<=5;++start)
    // {
    //     printf(" now starting point is : %d \n",start);
    // }
    // for(int start=10;start>=1;--start)
    // {
    //  printf(" now starting point is : %d \n",start);   
    // }
    int selectedpeople=0;
    int experience;

    for (int vacancy=1;vacancy<=10;vacancy++)
    {
        printf("\nperson no %d \n enter your experience\n",vacancy);
        scanf("%d",&experience);
        if((experience>=2)&&(experience<=5))
        {
            printf("\n your selected in this position");
            selectedpeople++;
        }
        else
        {
            printf("\n not selected in this position");
        }
    }
    printf("\ntotal no of people selected in the position : %d",selectedpeople);
 }
