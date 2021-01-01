#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void test1()
{
    int *p=calloc(10,sizeof(int));
    for(int i=0;i<=50;++i)
    {
        printf("%d\t",p[i]);
    }
    if(p!=NULL)
    {
        free(p);
        p=NULL;
    }
}



void test2()
{
    int *p=malloc(sizeof(int)*10);
    p=realloc(p,sizeof(int)*4);

    p=realloc(p,sizeof(int)*23232);

    
}


int main()
{
    test1();
    while (1)
    {
        test2();
    }
    
}