#include<stdio.h>
int linearsearch(int data[],int get)
{
    for(int i=0;i<10;i++)
    {
        if(get==data[i])
        {
            return i;
        }
    }
    return -1;
}
void main()
{
      int myvalues[10]={23,45,67,56,15,34,13,99,98,96};
    int favvalue;
    printf(" which value you want search in my array");
    scanf("%d",&favvalue);
   int pos= linearsearch(myvalues,favvalue);
   if(pos==-1)
   {
    printf(" %d your value is not founded in my array list",favvalue);
   }
   else
   {
    printf(" %d your value is founded @ %d",favvalue,pos);
   }
}