#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void bubbleSort(int *arr,int length)
{
    for(int index =0;index<length;++index)
    {
        for(int bIndex=index+1;bIndex<length;++bIndex)
        {
            if(arr[index]<arr[bIndex])
            {
                int tem=arr[index];
                arr[index]=arr[bIndex];
                arr[bIndex]=tem;
            }
        }
    }
}

int main(void)
{
    int arr[]={1,2,3,4,5,6,3,3,343,343,1,211,56,45,76,657};
    int length=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,length);
    for(int index=0;index<length;++index)
    {
        printf("%d\n",arr[index]);
    }
    return 0;
}