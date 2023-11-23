#include <stdio.h>
void main()
{
    int mydata[3][3]={ {1,2,3},{4,5,6},{7,8,9} };
    int single[9];
    int index=0;
    int row=1,column=1;
    for( ;column<=2;column++)
    {
       single[index]= mydata[row][column];  
        // single[0]= mydata[1][1] =5
        // single[1]= mydata[1][2] =6 
        index++;
    }
    row++;column--; //row=2,column=2
    for( ;column>=0;column--)
    {
           single[index]= mydata[row][column];  
            // single[2]= mydata[2] [2]=9
            // single[3]= mydata[2] [1]=8
            // single[4]= mydata[2] [0]=7 
            index++;
    }
    column++,row--;//column=0,row=1
    for( ; row>=0;row--)
    {
        single[index]= mydata[row][column];  
         // single[5]= mydata[1] [0]=4
        //  single[6]= mydata[0] [0]=1
        index++;
    }
    column++,row++;//column=1;row=0;
    for( ; column<=2;column++)
    {
        single[index]= mydata[row][column];  
         // single[7]= mydata[0] [1]=2
        //  single[8]= mydata[0] [2]=3
        index++;

    }
    // single dimensional array values:
    for(int pos=0;pos<9;pos++)
    {
        printf("%d ",single[pos]);
    }
}