#include <stdio.h>
void main()
{
    float weight[10]={12.3,45.6,67.4,87.5,88.7,89.8,92.4,93.4,95.5,99.6};
    // printf("%.2f",weight[0]);
    printf(" before update values \n");
    int pos=0;
    while(pos<10)
    {
        printf("%.2f,",weight[pos]);
        pos++;
    }   
    int index;
    float newvalue;
    printf(" \n which position you want update in my array  ");
    scanf("%d",&index);
    printf("\nchoose to this position %d, which number added in new(replace)  ",index);
    scanf("%f",&newvalue);
      weight[index]=newvalue;//update
    printf("\n After Update values ");
  
    for(int pos=0;pos<10;pos++)
    {
        printf("%.2f,",weight[pos]);
    }
}

