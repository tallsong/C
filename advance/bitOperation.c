#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



void test1()
{
    int num=3;
    printf("~num= %d\n",~num);
}



void test2()
{
    int num=123;
    if((num&1)==1)
    {
        printf("num is odd\n");
    }
    else
    {
        printf("num is even\n");
    }
    
}


void test3()
{
    int n1=3;
    int n2=5;
    printf("%d\n",n1|n2);
}

int main()
{
    test3();
    return EXIT_SUCCESS;
}