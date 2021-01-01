#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int *getSpace()
{
    int *p=malloc(sizeof(int)*5);
    for(int i=0;i<5;i++)
    {
        *(p+i)=i*888;
    }
    return p;
}


void testSpace(int *p)
{
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
    }
    free(p);
    p=NULL;
}


int main()
{
    int *p=getSpace();
    testSpace(p);
    return EXIT_SUCCESS;
}