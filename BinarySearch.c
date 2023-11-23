#include <stdio.h>

int binarysearch(int array[],int start,int end,int target)
{
    if(end>start)
    {
        int mid=(start+end)/2;

        if(array[mid]==target)
        {
            return mid;
        }
        else if (array[mid]<target)
        {
            return binarysearch(array,mid+1,end,target);
        }
        else if( array[mid]>target)
        {
            return binarysearch(array,start,mid,target);
        }
        else
        {
            return -1;
        }
    }
    return -1;
}
void main()
{
    int orderedvalues[10]={5,15,25,35,45,55,65,75,85,95};
    int favvalue;
    printf(" which value you want search in my array");
    scanf("%d",&favvalue);

    int pos =binarysearch(orderedvalues,0,10,favvalue);
     if(pos==-1)
   {
    printf(" %d your value is not founded in my array list",favvalue);
   }
   else
   {
    printf(" %d your value is founded @ %d",favvalue,pos);
   }

}