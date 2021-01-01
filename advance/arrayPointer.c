#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>




void test3()
{
    int arr[5]={5,4,3,2,1};
    int (* p)[5]=&arr;
    for(int i=0;i<5;++i)
    {
        printf("%d\n",(*p)[i]);
    }
}



int main()
{
    test3();
    return EXIT_SUCCESS;
}